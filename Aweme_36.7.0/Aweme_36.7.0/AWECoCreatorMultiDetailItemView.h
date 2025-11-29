@class AWECoCreatorMultiDetailTagView, AWECoCreatorModel, UIImageView, NSString, UILabel;

@interface AWECoCreatorMultiDetailItemView : UIView

@property (nonatomic) BOOL isSignificant;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWECoCreatorMultiDetailTagView *tagView;
@property (retain, nonatomic) AWECoCreatorModel *itemModel;
@property (copy, nonatomic) NSString *tagTitle;
@property (copy, nonatomic) NSString *tagSubtitle;
@property (nonatomic) struct CGSize { double width; double height; } avatarImageSize;
@property (copy, nonatomic) id /* block */ clickHandler;

- (void)handleClickTap;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)updateViews;
- (void)updateWithModel:(id)a0;

@end
