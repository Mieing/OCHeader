@class NSString;

@interface ACCMusicCapsuleUIState : AWEBaseBizConfigModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL cancellable;
@property (nonatomic) BOOL enabled;

+ (id)defaultState;
+ (id)loadingState;
+ (id)failedState;

- (void).cxx_destruct;

@end
