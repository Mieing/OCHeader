@class AWEIMMessageStateIndicator, YYLabel;

@interface AWEIMMessageStateFooter : UIView

@property (retain, nonatomic) AWEIMMessageStateIndicator *stateIndicator;
@property (retain, nonatomic) YYLabel *alreadyReadLabel;

- (void)__setupUI;
- (void)changeIndicatorToState:(long long)a0 readReceipt:(id)a1;
- (void)changeIndicatorToState:(long long)a0 progress:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateContent:(id)a0;

@end
