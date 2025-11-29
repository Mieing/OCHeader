@class NSString;

@interface LiteAppPageConfig : NSObject

@property (nonatomic) unsigned long long backgroundColor;
@property (nonatomic) unsigned long long darkBackgroundColor;
@property (nonatomic) unsigned long long titleBackgroundColor;
@property (nonatomic) unsigned long long darkTitleBackgroundColor;
@property (nonatomic) long long pageOrientation;
@property (nonatomic) BOOL useCoreText;
@property (retain, nonatomic) NSString *backgroundImagePath;
@property (retain, nonatomic) NSString *darkBackgroundImagePath;
@property (retain, nonatomic) NSString *backgroundImageMode;
@property (retain, nonatomic) NSString *globalPkgAppId;
@property (retain, nonatomic) NSString *globalPkgMinVersion;

- (id)initWithJson:(id)a0;
- (id)stringForKey:(id)a0 key:(id)a1 defaultValue:(id)a2;
- (long long)intForKey:(id)a0 key:(id)a1 defaultValue:(long long)a2;
- (unsigned long long)uintForKey:(id)a0 key:(id)a1 defaultValue:(unsigned long long)a2;
- (BOOL)boolForKey:(id)a0 key:(id)a1;
- (id)currentBackgroundColor:(BOOL)a0;
- (id)currentTitleBackgroundColor:(BOOL)a0;
- (id)currentBackgroundImage:(id)a0 isDarkMode:(BOOL)a1;
- (long long)currentBackgroundImageMode;
- (void).cxx_destruct;

@end
