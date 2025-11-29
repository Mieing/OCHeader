@class NSArray;
@protocol IESLiveLinkmicCanvasLayoutProvider;

@interface IESLiveLinkmicCanvasViewModel : NSObject

@property (retain, nonatomic) id<IESLiveLinkmicCanvasLayoutProvider> layoutProvider;
@property (copy, nonatomic) id /* block */ onCellModelsUpdateBlock;
@property (copy, nonatomic) NSArray *cellModels;
@property (copy, nonatomic) NSArray *cellSlotConfigs;
@property (copy, nonatomic) NSArray *separatorSlotConfigs;

- (id)cellModelWithIndex:(long long)a0;
- (void)onCellModelsUpdated:(id /* block */)a0;
- (void)insertRTCSessionView:(id)a0 linkMicUser:(id)a1;
- (void)insertUser:(id)a0;
- (void)updateWithLayout:(id)a0;
- (void)insertUser:(id)a0 atIndex:(long long)a1;
- (void)updateSlotConfigs;
- (void)insertRTCSessionView:(id)a0 linkMicUserID:(id)a1 isLocalPreview:(BOOL)a2;
- (id)createCellSlotConfigs;
- (id)createSeparatorSlotConfigs;
- (id)createCellModelsWithConfigs:(id)a0;
- (id)cellModelWithConfig:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidIndex:(long long)a0;

@end
