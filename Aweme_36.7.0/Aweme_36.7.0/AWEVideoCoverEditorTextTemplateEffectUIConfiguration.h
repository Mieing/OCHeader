@class UIColor, NSString, UICollectionViewFlowLayout, UIView;

@interface AWEVideoCoverEditorTextTemplateEffectUIConfiguration : NSObject <AWETextTemplateStickerUIConfigurationProtocol>

@property (copy, nonatomic) id /* block */ effectListReloadHandler;
@property (nonatomic) double effectListHeight;
@property (retain, nonatomic) UICollectionViewFlowLayout *effectListViewLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } effectInsets;
@property (copy, nonatomic) UIColor *templateSelectedBorderColor;
@property (retain, nonatomic) UIView *listEmptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedBorderColor;
- (void)setSelectedBorderColor:(id)a0;
- (id)effectListViewBackgroundColor;
- (double)effectListViewHeight;
- (Class)stickerItemCellClass;
- (id)stickerListViewLayout;
- (id)effectListLoadingView;
- (id)effectListErrorView;
- (id)effectListEmptyView;
- (void)setEffectListViewHeight:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
