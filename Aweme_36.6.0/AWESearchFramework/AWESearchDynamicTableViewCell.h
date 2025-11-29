@class NSString, AWESearchDynamicEngine, AWEDynamicPatchModel;
@protocol AWESearchDynamicTableViewCellDelegate;

@interface AWESearchDynamicTableViewCell : UITableViewCell <AWESearchDynamicEngineDelegate, AWESearchDynamicCellProtocol>

@property (retain, nonatomic) AWESearchDynamicEngine *lynxEngine;
@property (nonatomic) BOOL isShown;
@property (nonatomic) struct CGSize { double width; double height; } lastLynxContainerIntrinsicContentSize;
@property (copy, nonatomic) NSString *searchScene;
@property (nonatomic) BOOL hasUnDispachedPageScroll;
@property (nonatomic) BOOL haslynxEngineTasmFinish;
@property (weak, nonatomic) id<AWESearchDynamicTableViewCellDelegate> delegate;
@property (retain, nonatomic) AWEDynamicPatchModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calculateHeightReuseLynxEngine;

- (void)configWithModel:(id)a0;
- (void)lynxEngineDidUpdate:(id)a0;
- (void)lynxEngine:(id)a0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)setupControl;
- (void)triggerShow;
- (void)triggerHide;
- (void)triggerDisappear;
- (void)triggerAppear;
- (BOOL)enablePreserveDataWithModel:(id)a0;
- (void)notifySearchWebviewClose:(id)a0;
- (BOOL)useSeperateRender;
- (void)configLynxEngineWithModel:(id)a0;
- (void)configStorageAndPreserveDataWithModel:(id)a0;
- (void)dispatchPageScrollShow;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 searchScene:(id)a2;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;

@end
