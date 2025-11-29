@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface MMTableViewIndexItem : MMUIView {
    UILabel *_label;
    UIImageView *_imageView;
    UIView *_backgroundRoundView;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *renderedIconImage;
@property (retain, nonatomic) UIImage *searchIconImage;
@property (nonatomic) BOOL selected;

- (void)reloadViewWithBrandColor:(id)a0;
- (double)indexWidth;
- (void).cxx_destruct;

@end
