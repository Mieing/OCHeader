@class NSString;

@interface CSJAdSDKPlayableToolManager : NSObject

@property (copy, nonatomic) NSString *playableURL;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSString *deeplinkUrl;
@property (nonatomic) BOOL isLandScape;

+ (void)setPlayableURL:(id)a0;
+ (void)setIsLandScape:(BOOL)a0;
+ (void)setDeeplinkUrl:(id)a0;
+ (void)clearAll;
+ (id)sharedInstance;
+ (void)setDownloadUrl:(id)a0;

- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
