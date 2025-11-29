@class UIImageView, UILabel, AWEMusicEditorCollectionHeaderView;
@protocol AWEVideoPublishMusicSelectHeaderViewDelegate;

@interface AWEVideoPublishMusicSelectHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWEMusicEditorCollectionHeaderView *dotSeparatorView;
@property (weak, nonatomic) id<AWEVideoPublishMusicSelectHeaderViewDelegate> delegate;

- (void)updateImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapped:(id)a0;

@end
