@class IESECVideoGirdleSloganModel, IESECURLModel, IESECVideoGirdleInfoModel, IESECGCDTimer, IESECVideoCountdownViewModel;

@interface IESECVideoGirdleViewModel : NSObject

@property (nonatomic) long long rightViewType;
@property (retain, nonatomic) IESECVideoCountdownViewModel *countdownViewModel;
@property (retain, nonatomic) IESECVideoGirdleInfoModel *girdleInfoModel;
@property (retain, nonatomic) IESECGCDTimer *countdownTimer;
@property (readonly, nonatomic) BOOL shouldShow;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double overlapHeight;
@property (readonly, nonatomic) IESECURLModel *backgroundImage;
@property (readonly, nonatomic) IESECURLModel *logoImage;
@property (readonly, nonatomic) IESECVideoGirdleSloganModel *slogan;
@property (copy, nonatomic) id /* block */ countdownNeedRefresh;

- (void)updateWithGirdleInfoModel:(id)a0;
- (void)updateRightViewTypeWithGirdleInfoModel:(id)a0;
- (void)updateCountdownViewModelThenFireTimerIfNeeded;
- (void)clearCountdownViewModel;
- (void)updateCountdownViewModeThenCallBack;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)invalidateTimerIfNeeded;

@end
