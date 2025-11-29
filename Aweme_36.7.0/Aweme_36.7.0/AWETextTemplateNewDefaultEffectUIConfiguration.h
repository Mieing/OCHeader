@class UIColor, NSString;

@interface AWETextTemplateNewDefaultEffectUIConfiguration : NSObject <AWETextTemplateStickerUIConfigurationProtocol>

@property (copy, nonatomic) id /* block */ effectListReloadHanlder;
@property (nonatomic) double effectHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } effectInsets;
@property (copy, nonatomic) UIColor *templateSelectedBorderColor;
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
- (void)setEffectListViewHeight:(double)a0;
- (BOOL)isNewTextTemplateConfig;
- (void).cxx_destruct;
- (id)init;

@end
