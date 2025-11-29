@class NSMutableArray;
@protocol IESLiveGiftDisplayPiplineContext;

@interface IESLiveGiftDisplayPipelineExecutor : NSObject

@property (retain, nonatomic) NSMutableArray *handlers;
@property (retain, nonatomic) id<IESLiveGiftDisplayPiplineContext> contextHolder;

- (BOOL)enableDisplayWithGift:(id)a0;
- (BOOL)checkGift:(id)a0 withHandler:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addHandler:(id)a0;

@end
