@class WCPayWebImageView, NSString, UIButton, UILabel, WCPayTransToBankCardReceiver;
@protocol WCPayT2BCCandidateViewDelegate;

@interface WCPayT2BCCandidateView : UIView

@property (retain, nonatomic) WCPayTransToBankCardReceiver *receiver;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCPayWebImageView *bankIconImageView;
@property (retain, nonatomic) UILabel *bankLabel;
@property (retain, nonatomic) NSString *inputText;
@property (retain, nonatomic) UIButton *maskBtn;
@property (weak, nonatomic) id<WCPayT2BCCandidateViewDelegate> delegate;

- (id)initWithReceiver:(id)a0;
- (void)layoutSubviews;
- (void)updateWithInputText:(id)a0;
- (void)updateView;
- (void)onTapCandidateView:(id)a0;
- (void).cxx_destruct;

@end
