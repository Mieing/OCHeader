@class NSPointerArray, NSString;

@interface AWEFeedThemeManager : NSObject <AWEFeedThemeManager>

@property (retain, nonatomic) NSPointerArray *delegateArray;
@property (nonatomic) long long currentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)changeTheme:(long long)a0;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;

@end
