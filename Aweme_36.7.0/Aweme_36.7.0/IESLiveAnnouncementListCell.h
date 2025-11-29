@class UIImageView, IESLiveAnnouncementCardView;
@protocol IESLiveAnnouncementListCellDelegate;

@interface IESLiveAnnouncementListCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) IESLiveAnnouncementCardView *cardView;
@property (weak, nonatomic) id<IESLiveAnnouncementListCellDelegate> delegate;

- (void)resetLayoutIfNeededWithModel:(id)a0;
- (void)updateSelectImageIfNeededWithModel:(id)a0;
- (void)selectDidTapped;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (void)setupLayout;

@end
