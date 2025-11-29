@interface WCFinderProgressBarStatusInfo : NSObject

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isVideoPause;
@property (nonatomic) BOOL isManual;
@property (nonatomic) double maxPlayProgress;
@property (nonatomic) double currentPlayProgress;
@property (nonatomic, getter=isShowProgressBar) BOOL showProgressBar;

- (id)description;
- (id)copy;

@end
