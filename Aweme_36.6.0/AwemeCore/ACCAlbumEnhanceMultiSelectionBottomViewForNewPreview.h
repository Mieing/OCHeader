@class NSString, UIVisualEffectView, UILabel, NSMutableArray, UIButton;

@interface ACCAlbumEnhanceMultiSelectionBottomViewForNewPreview : UIView <CAKAlbumPreviewPageBottomViewProtocol>

@property (retain, nonatomic) NSMutableArray *buttonList;
@property (retain, nonatomic) UIButton *selectPhotoButton;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectPhotoStatus:(BOOL)a0;
- (void)updateNextButtonStatus:(BOOL)a0;
- (void)updatePhotoSelected:(id)a0 greyMode:(BOOL)a1;
- (void)updateRepeatSelected:(id)a0 greyMode:(BOOL)a1;
- (void)hideBottomView:(BOOL)a0;
- (void)updateLayoutConstaint;
- (void).cxx_destruct;
- (id)init;
- (void)addButton:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)removeButton:(id)a0;

@end
