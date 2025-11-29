@class RTVFinishForwardModel, NSString, NSDictionary, RTVBehaviorOptions, NSNumber;

@interface RTVXRShareFeedAction : RTVXRAction

@property (readonly, nonatomic) long long enterFrom;
@property (readonly, nonatomic) RTVFinishForwardModel *finishForwardModel;
@property (readonly, copy, nonatomic) NSString *feedItemID;
@property (readonly, nonatomic) NSNumber *feedItemType;
@property (readonly, copy, nonatomic) NSDictionary *rawData;
@property (readonly, copy, nonatomic) RTVBehaviorOptions *behaviorOptions;

- (void)updateRawData:(id)a0;
- (void)updateEnterFrom:(long long)a0;
- (void)updateBehaviorOptions:(id)a0;
- (void)updateFeedItemID:(id)a0;
- (void)updateItemType:(id)a0;
- (void)updateFinishForwardModel:(id)a0;
- (void).cxx_destruct;

@end
