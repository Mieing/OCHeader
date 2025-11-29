@class NSString, IESLiveOpenPlatformExplainCardModel, IESLiveGCDTimer;

@interface IESLiveOpenPlatformExplainCardViewModel : NSObject

@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) double showTimeinterval;
@property (copy, nonatomic) NSString *closeType;
@property (readonly, nonatomic) IESLiveOpenPlatformExplainCardModel *cardModel;

- (id)attachingDIContext;
- (id)_trackParams;
- (void)handleTapAction;
- (id)initWithCardModel:(id)a0;
- (void)handleCloseAction;
- (void)handleCardDidShow;
- (void)handleCardDidHide;
- (void)_invalidateTimer;
- (void).cxx_destruct;
- (void)dealloc;

@end
