@class NSArray, UIImageView, UIView;

@interface MMFinderLiveMusicSettingOperationBar : UIView

@property (retain, nonatomic) NSArray *actionList;
@property (retain, nonatomic) UIImageView *editingIconImg;
@property (retain, nonatomic) UIImageView *volumnIconImg;
@property (retain, nonatomic) UIView *volumnIconView;
@property (retain, nonatomic) UIImageView *addMusicIconImg;
@property (copy, nonatomic) id /* block */ tapCallback;
@property (nonatomic) BOOL isVolumeSelected;

+ (double)preferWidth;
+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actionList:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutVolumnIconImg;
- (void)layoutVolumnIconView;
- (void)layoutEditingIconImg;
- (void)layoutAddMusicIconImg;
- (void)onEditIconTapGesture:(id)a0;
- (void)onVolumnTapGesture:(id)a0;
- (void)onAddMusicTapGesture:(id)a0;
- (void).cxx_destruct;

@end
