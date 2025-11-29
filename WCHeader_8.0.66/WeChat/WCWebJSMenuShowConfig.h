@class NSArray;

@interface WCWebJSMenuShowConfig : MMObject

@property (nonatomic) unsigned int forbigFlag;
@property (retain, nonatomic) NSArray *arrMenuItems;
@property (nonatomic) long long menuUIStyle;

- (id)init;
- (BOOL)isForbigSearchInArticleMenuButton;
- (BOOL)isForbigChangeFontSizeMenuButton;
- (void).cxx_destruct;

@end
