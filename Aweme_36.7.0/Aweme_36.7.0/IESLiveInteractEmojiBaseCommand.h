@class NSString, NSMutableDictionary, IESLiveEmojiDecoderPool, NSArray, IESLiveInteractionEmojiAdapter, NSObject;
@protocol OS_dispatch_group;

@interface IESLiveInteractEmojiBaseCommand : NSObject

@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (retain, nonatomic) IESLiveEmojiDecoderPool *decoderPool;
@property (copy, nonatomic) NSString *baseDir;
@property (retain, nonatomic) IESLiveInteractionEmojiAdapter *adapter;
@property (copy, nonatomic) NSArray *users;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *groupTask;
@property (weak, nonatomic) IESLiveInteractEmojiBaseCommand *pre;
@property (retain, nonatomic) NSMutableDictionary *timeOffsets;

- (void)dispatch:(id)a0 effect:(id)a1 to:(id)a2;
- (id)userTasks:(id)a0;
- (id)initWithBaseDir:(id)a0 adapter:(id)a1 decoder:(id)a2;
- (void)batchDispatch:(id)a0 effect:(id)a1 to:(id)a2;
- (void)cancelTask:(id)a0;
- (void).cxx_destruct;
- (void)removeAnimation:(id)a0;

@end
