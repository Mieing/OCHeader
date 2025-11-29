@class UIImageView, WCFinderAuthInfoIconView, UILabel, RichTextView, MMWebImageView;
@protocol WCFinderVideoTemplateViewDelegate;

@interface WCFinderVideoTemplateView : MMUIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMWebImageView *mediaBkgImage;
@property (retain, nonatomic) RichTextView *songNameTextView;
@property (retain, nonatomic) UILabel *songDescLabel;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCFinderVideoTemplateViewDelegate> delegate;

+ (id)buildTitleTextView:(double)a0;
+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithMusicTopicInfo:(id)a0;
- (void)layoutAllSubviews;
- (void).cxx_destruct;

@end
