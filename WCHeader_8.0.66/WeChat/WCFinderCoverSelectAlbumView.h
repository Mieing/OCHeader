@class NSString, UIImageView, UILabel;

@interface WCFinderCoverSelectAlbumView : MMUIView

@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iconName:(id)a1 text:(id)a2 clickBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
