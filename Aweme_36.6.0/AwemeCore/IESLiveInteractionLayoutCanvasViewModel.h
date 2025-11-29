@class NSArray, NSString, IESLiveInteractionLayout;
@protocol IESLiveInteractionLayoutCanvasModelDataSource;

@interface IESLiveInteractionLayoutCanvasViewModel : NSObject <IESLiveInteractionLayoutCanvasCellModelDataSource>

@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (copy, nonatomic) id /* block */ onCellModelsUpdateBlock;
@property (copy, nonatomic) NSArray *cellModels;
@property (nonatomic) BOOL isEnlargeMode;
@property (weak, nonatomic) id<IESLiveInteractionLayoutCanvasModelDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellModelWithIndex:(long long)a0;
- (long long)viewIndexForUser:(id)a0;
- (void)onCellModelsUpdated:(id /* block */)a0;
- (void)updateWithLayout:(id)a0;
- (id)cellModelWithConfig:(id)a0;
- (void)updateWithCurrentLayout;
- (void)insertRTCSessionView:(id)a0 linkMicUserID:(id)a1 isLocalPreview:(BOOL)a2 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)enableFullScreenRenderForCanvasCellModel:(id)a0;
- (void)updateCellModelsWithLayout:(id)a0;
- (id)createCellModelsWithLayout:(id)a0;
- (void)updateSlotConfigsWithSlots:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidIndex:(long long)a0;
- (void)clean;

@end
