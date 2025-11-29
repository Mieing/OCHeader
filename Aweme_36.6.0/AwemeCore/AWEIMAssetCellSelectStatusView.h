@class UIImageView, UILabel;

@interface AWEIMAssetCellSelectStatusView : UIView

@property (retain, nonatomic) UIImageView *unselectImageView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (nonatomic) long long number;
@property (nonatomic) BOOL shouldDisplayUnselectStatus;
@property (nonatomic) BOOL useImageWithWhiteCircle;
@property (nonatomic) unsigned long long status;

- (id)initWithShowUnselectImage:(BOOL)a0;
- (void)setSelect:(unsigned long long)a0 number:(long long)a1 animated:(BOOL)a2;
- (void).cxx_destruct;

@end
