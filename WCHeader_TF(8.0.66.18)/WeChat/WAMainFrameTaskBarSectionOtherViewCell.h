@class UIView, NSString, MMWebImageView, CAGradientLayer, NSMutableArray, MinimizeTaskData, UILabel, MMUIButton;
@protocol WAMainFrameTaskBarSectionOtherViewCellDelegate;

@interface WAMainFrameTaskBarSectionOtherViewCell : UICollectionViewCell <MMWebImageViewDelegate, IMiniMizeUserdRecordUpdateExt> {
    BOOL m_selected;
    UIView *_topMask;
    UIView *_bottomMask;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
    MMUIButton *_closeButton;
    MinimizeTaskData *_taskData;
}

@property (retain, nonatomic) NSMutableArray *voiceOverElements;
@property (weak, nonatomic) id<WAMainFrameTaskBarSectionOtherViewCellDelegate> delegate;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UIView *coverArea;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initView;
- (void)onCloseBtnClicked;
- (BOOL)supportAddToMinimize;
- (id)defaultImage;
- (void)updateWithListInfo:(id)a0;
- (void)layoutSubviews;
- (void)onLoadImageOK:(id)a0;
- (BOOL)shouldListenSnapshotUpdate;
- (void)onTaskSnapShotUpdate:(id)a0 snapshot:(id)a1;
- (void)initVoiceOverElements;
- (void)updateAccessibilityFrame;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end
