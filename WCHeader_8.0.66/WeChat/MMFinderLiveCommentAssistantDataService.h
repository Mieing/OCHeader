@interface MMFinderLiveCommentAssistantDataService : NSObject

+ (void)getLiveRoomCommentAssistantList:(id)a0 completion:(id /* block */)a1;
+ (void)addLiveRoomCommentAssistants:(id)a0 liveTaskId:(id)a1 completion:(id /* block */)a2;
+ (void)removeLiveRoomCommentAssistants:(id)a0 liveTaskId:(id)a1 completion:(id /* block */)a2;

@end
