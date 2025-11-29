@class NSString;

@interface ACCSelectedAssetsImpl : NSObject <ACCSelectedAssetsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedAssetsViewWithChangeCellColor:(BOOL)a0 withPublishModel:(id)a1;
- (id)selectedAssetsViewWithChangeCellColor:(BOOL)a0 backgroundIconName:(id)a1;
- (id)selectedAssetsBottomView;
- (id)albumPreviewPageBottomView;
- (id)albumNewPreviewPageBottomView;

@end
