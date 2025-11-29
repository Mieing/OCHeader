@class TIMXMessageIndexInfo;

@interface TIMXMessageIndexInfoBuilder : NSObject

@property (retain, nonatomic) TIMXMessageIndexInfo *indexInfo;

- (id)withConversationID:(id)a0;
- (id)withMinIndexV2:(long long)a0;
- (id)withMaxIndexV2:(long long)a0;
- (id)withRealMinIndexV2:(long long)a0;
- (id)withRealMaxIndexV2:(long long)a0;
- (id)withMsgWithMinIndexV2:(id)a0;
- (id)withMsgWithMaxIndexV2:(id)a0;
- (id)withIndexV2Arr:(id)a0;
- (id)withIndexV2ArrToString:(id)a0;
- (void).cxx_destruct;
- (id)build;
- (id)init;

@end
