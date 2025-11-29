@class NSString, UIImageView, DUXDivider, UILabel, UIView, UIImage;
@protocol DUXContentFormContent;

@interface DUXContentForm : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double maxScale;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL showDivider;
@property (nonatomic) BOOL rightPadding;
@property (retain, nonatomic) id<DUXContentFormContent> content;
@property (nonatomic) unsigned long long enlargeType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (void)setContentConstraints;
- (id)initWithTitle:(id)a0 content:(id)a1 enlargeType:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)endEditing:(BOOL)a0;
- (id)initWithTitle:(id)a0 content:(id)a1;

@end
