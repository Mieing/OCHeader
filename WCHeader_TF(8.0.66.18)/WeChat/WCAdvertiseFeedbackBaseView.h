@protocol WCAdvertiseFeedbackViewDelegate;

@interface WCAdvertiseFeedbackBaseView : MMUIWindow

@property (weak, nonatomic) id<WCAdvertiseFeedbackViewDelegate> delegate;

- (void)show;
- (void)hide;
- (void).cxx_destruct;

@end
