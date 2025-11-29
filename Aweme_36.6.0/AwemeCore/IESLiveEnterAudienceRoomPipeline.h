@class IESLiveEnterRoomAisle;

@interface IESLiveEnterAudienceRoomPipeline : NSObject

@property (retain, nonatomic) IESLiveEnterRoomAisle *onGoingRoomAisle;
@property (copy, nonatomic) id /* block */ completion;

+ (id)enterAudienceRoomWithRoomAisle:(id)a0 completion:(id /* block */)a1;
+ (id)sharedPipeline;

- (id)enterAudienceRoomWithRoomAisle:(id)a0 completion:(id /* block */)a1;
- (void)preCheckRoomAisle:(id)a0;
- (void)clearRoomEnter:(BOOL)a0 cancel:(BOOL)a1 clearOnGoingRoomAisle:(BOOL)a2;
- (void)removeLinkWithRoomAisle:(id)a0;
- (id)enterRoomWillEnterProcessWithRoomAisle:(id)a0;
- (void)enterRoomDidEnterProcessWithRoomAisle:(id)a0 roomModel:(id)a1;
- (void)clearRoomEnterWithError:(id)a0 roomAisle:(id)a1;
- (void)enterRoomWillShowVCProcessWithRoomAisle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;

@end
