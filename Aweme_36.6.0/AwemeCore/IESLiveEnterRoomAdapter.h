@class HTSLiveRoomAPI;

@interface IESLiveEnterRoomAdapter : NSObject

@property (retain, nonatomic) HTSLiveRoomAPI *roomApi;

+ (id)transToEnterPipelineRoomAisle:(id)a0 completion:(id /* block */)a1;
+ (void)preProcessingReplacedVC:(id)a0 diContext:(id)a1;
+ (id)getReplacedVCWithSourceVC:(id)a0 diContext:(id)a1;
+ (void)configAudienceViewController:(id)a0 withRoomAlise:(id)a1;
+ (void)invokeTarget:(id)a0 withSelectorString:(id)a1;
+ (id)shared;

- (void)fetchRoomInfo:(id)a0 roomList:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
