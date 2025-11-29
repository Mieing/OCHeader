@class NSMutableArray, IESECMallInnerFeedTitleView, UILabel, IESECMallInnerFeedPriceView, IESECMallInnerFeedImmersionPrivilegeMultiTagView;

@interface IESECMallInnerFeedImmersionContentView : UIView

@property (retain, nonatomic) IESECMallInnerFeedPriceView *priceInfo;
@property (retain, nonatomic) IESECMallInnerFeedTitleView *titleView;
@property (retain, nonatomic) UILabel *recReasonLabel;
@property (retain, nonatomic) IESECMallInnerFeedImmersionPrivilegeMultiTagView *privilegeTagView;
@property (retain, nonatomic) NSMutableArray *reportProductTagArrays;

- (BOOL)calculateRecReasonCanAppend:(id)a0 withCurrentText:(id)a1;
- (id)recReasonLabelColor:(id)a0;
- (BOOL)isSpecialReason:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithNewModel:(id)a0;

@end
