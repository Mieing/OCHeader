@class NSString;

@interface AWETextTemplateDefaultEffectUIConfiguration : NSObject <AWETextTemplateStickerUIConfigurationProtocol>

@property (copy, nonatomic) id /* block */ effectListReloadHanlder;
@property (nonatomic) double effectHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)effectListViewBackgroundColor;
- (double)effectListViewHeight;
- (Class)stickerItemCellClass;
- (id)stickerListViewLayout;
- (id)effectListLoadingView;
- (id)effectListErrorView;
- (void)setEffectListViewHeight:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
