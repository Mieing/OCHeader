@class NSArray, MMLiveQcPollQuestion, NSString, UIView, UILabel, MMFinderLivePromoteDisplayLeaseToken;
@protocol MMLiveQcPollResponseDelegate;

@interface MMLiveQcPollView : UIView <MMFinderLivePromoteDisplayLeaseTokenDelegate>

@property (retain, nonatomic) MMLiveQcPollQuestion *question;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *stemLabel;
@property (retain, nonatomic) NSArray *optionButtons;
@property (retain, nonatomic) MMFinderLivePromoteDisplayLeaseToken *displayLeaseToken;
@property (nonatomic) BOOL responseEntered;
@property (weak, nonatomic) id<MMLiveQcPollResponseDelegate> responseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQuestion:(id)a0 displayLeaseToken:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onOptionButtonTapped:(id)a0;
- (void)onPromoteDisplayLeaseInvalidated:(id)a0 forReason:(unsigned long long)a1;
- (void).cxx_destruct;

@end
