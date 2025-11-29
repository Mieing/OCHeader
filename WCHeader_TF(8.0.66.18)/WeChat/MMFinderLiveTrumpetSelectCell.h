@class MMUIImageView, WCFinderHeadImageView, MMUIView, UIImageView, MMFinderLiveTrumpetSelectCellInfo, MMUILabel;
@protocol MMFinderLiveTrumpetSelectCellDelegate;

@interface MMFinderLiveTrumpetSelectCell : WCTableViewNormalCellManager

@property (retain, nonatomic) MMFinderLiveTrumpetSelectCellInfo *info;
@property (weak, nonatomic) id<MMFinderLiveTrumpetSelectCellDelegate> delegate;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMUIImageView *createAccountImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *selectStateImageView;

- (id)initWithWidth:(double)a0 height:(double)a1 delegate:(id)a2 info:(id)a3;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)a0 height:(double)a1;
- (void)initSubviewsWith:(double)a0 height:(double)a1;
- (void)layoutUI;
- (void)onClickContent;
- (void).cxx_destruct;

@end
