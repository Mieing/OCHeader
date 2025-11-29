@interface WepkgCmd : WXPBGeneratedMessage

@property (nonatomic) BOOL clearAllPkgExceptCurrentEnabledVersion;
@property (nonatomic) BOOL reloadNow;

+ (void)initialize;

@end
