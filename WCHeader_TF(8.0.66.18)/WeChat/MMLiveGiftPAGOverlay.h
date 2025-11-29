@class NSString, MMLiveTaskId, NSMutableArray;

@interface MMLiveGiftPAGOverlay : UIView <MMLiveGiftPAGOverlayExt>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableArray *tagLabelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTagLabelList;
- (id)createTagLabel;
- (id)getTagLabelWithTagName:(id)a0 createIfNotExist:(BOOL)a1;
- (void)onGiftPAGViewDisplay:(id)a0 content:(id)a1 taskId:(id)a2;
- (void)onGiftPAGViewDisappear:(id)a0 taskId:(id)a1;
- (void).cxx_destruct;

@end
