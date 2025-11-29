@class NLESingleSlotMattingTask_OC;

@interface ACCCutSameMattingManager : NSObject

@property (retain, nonatomic) NLESingleSlotMattingTask_OC *mattingTask;

- (void)cancelCurrentTask;
- (BOOL)createSingleMattingTask:(id)a0 model:(id)a1 draftFolder:(id)a2 currentAsset:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;

@end
