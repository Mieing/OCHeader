@class NSString;

@interface BTCanvasMsgSectionData : BTMsgSectionData <BTCanvasItemCellViewModelDelegate>

@property (readonly, nonatomic) NSString *canvasId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateSectionDataWithMsgWrap:(id)a0;

- (id)initWithMsgWrap:(id)a0 sectionWidth:(double)a1 displayMode:(unsigned int)a2 delegate:(id)a3;
- (void)initItemViewModelArr;
- (unsigned long long)sectionType;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)a0;
- (id)getCurrentWebviewViewController;
- (BOOL)isMsgViewControllerInForground;
- (void)onCanvasHeightChange:(id)a0;
- (void)onCanvasItemClick:(id)a0;
- (void)onAdCanvasViewTouchEnd:(id)a0;
- (void).cxx_destruct;

@end
