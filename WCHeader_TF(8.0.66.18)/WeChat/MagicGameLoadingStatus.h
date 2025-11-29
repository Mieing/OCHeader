@class NSNumber, NSString;

@interface MagicGameLoadingStatus : NSObject

@property (nonatomic) BOOL isWxPkgLoading;
@property (nonatomic) BOOL isJsLoading;
@property (retain, nonatomic) NSNumber *loadingSpeed;
@property (retain, nonatomic) NSString *requestKey;
@property (retain, nonatomic) NSString *appId;

- (void).cxx_destruct;

@end
