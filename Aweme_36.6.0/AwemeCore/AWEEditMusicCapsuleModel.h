@class NSString;

@interface AWEEditMusicCapsuleModel : NSObject

@property (nonatomic) long long bizType;
@property (nonatomic) long long loadStatus;
@property (copy, nonatomic) NSString *musicName;
@property (nonatomic) BOOL cancellable;
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) id underlyingModel;

- (void).cxx_destruct;

@end
