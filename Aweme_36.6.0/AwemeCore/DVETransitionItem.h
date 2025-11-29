@class NSString, UIImageView, DVETransitionImageView, UILabel, DVESegmentClipBorderView, DVECircularProgressView;

@interface DVETransitionItem : DVEPickerBaseCell <DVETransitionItemAccessibilityLabel>

@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) DVETransitionImageView *iconView;
@property (retain, nonatomic) DVESegmentClipBorderView *borderView;
@property (retain, nonatomic) UIImageView *downloadView;
@property (retain, nonatomic) DVECircularProgressView *downloadingView;
@property (retain, nonatomic) UIImageView *downloadFailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateShowStatus;
- (id)getAccessibilityLabel;
- (id)createExtraIconView:(id)a0;
- (void)layoutDownloadStatusView:(id)a0;
- (void)setModel:(id)a0;
- (void)setDownloadProgress:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
