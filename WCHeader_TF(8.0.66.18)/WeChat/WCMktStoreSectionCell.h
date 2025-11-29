@class UIButton, CardSortInfo, UIImageView, UIView, MMUILabel;
@protocol WCMktStoreSectionCellDelegate;

@interface WCMktStoreSectionCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) MMUILabel *leftLabel;
@property (retain, nonatomic) MMUILabel *rightLabel;
@property (retain, nonatomic) UIImageView *rightArrowImgView;
@property (retain, nonatomic) UIView *seplineView;
@property (retain, nonatomic) UIButton *coverBtn;
@property (nonatomic) CardSortInfo *sortInfo;
@property (weak, nonatomic) id<WCMktStoreSectionCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateCellContentWithSortInfo:(id)a0;
- (void)sortRuleCoverBtnClick;
- (void).cxx_destruct;

@end
