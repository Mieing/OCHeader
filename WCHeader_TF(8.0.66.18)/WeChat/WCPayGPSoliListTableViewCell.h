@class RichTextView, NSString, UIImageView, UIView, SolitaireObj, MMUILabel;
@protocol WCPayGPSoliListTableViewCellDelegate;

@interface WCPayGPSoliListTableViewCell : MMTableViewCell <ILinkEventExt>

@property (retain, nonatomic) SolitaireObj *soliData;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) UIView *cellContentView;
@property (retain, nonatomic) UIView *cellHighlightView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *dateLabel;
@property (retain, nonatomic) MMUILabel *memberCountLabel;
@property (retain, nonatomic) RichTextView *detailTextView;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UIView *sepLine1;
@property (retain, nonatomic) UIView *sepLine2;
@property (weak, nonatomic) id<WCPayGPSoliListTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateCellWithSoliObj:(id)a0 containerWidth:(double)a1;
- (void)updateContentView;
- (void)setupCellContentView;
- (void)setupCellHighlightView;
- (void)setupTitleLabel;
- (void)setupDateLabel;
- (void)setupMemberCountLabel;
- (void)setupDetailTextView;
- (void)setupArrowImgView;
- (void)setupSepLine1;
- (void)setupSepLine2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
