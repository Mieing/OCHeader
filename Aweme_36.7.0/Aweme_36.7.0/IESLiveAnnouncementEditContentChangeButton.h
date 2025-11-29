@class UIImageView, UILabel;
@protocol IESLiveAnnouncementEditContentChangeButtonDelegate;

@interface IESLiveAnnouncementEditContentChangeButton : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) id<IESLiveAnnouncementEditContentChangeButtonDelegate> delegate;

- (void)onTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
