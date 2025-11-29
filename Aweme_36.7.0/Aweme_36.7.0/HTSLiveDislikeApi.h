@protocol IESLiveRoomService;

@interface HTSLiveDislikeApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (id)initWithRoom:(id)a0 diDContext:(id)a1;
- (void)dislikeAdRoomWithEnterFrom:(id)a0 enterMethod:(id)a1 creativeID:(id)a2 adID:(id)a3 logExtra:(id)a4 enterTag:(id)a5 baseUrl:(id)a6 path:(id)a7 dislikeAdType:(id)a8 dislikeAdList:(id)a9 reason:(long long)a10 complection:(id /* block */)a11;
- (void)dislikeAdRoomWithEnterFrom:(id)a0 enterMethod:(id)a1 creativeID:(id)a2 adID:(id)a3 logExtra:(id)a4 enterTag:(id)a5 baseUrl:(id)a6 path:(id)a7 dislikeAdType:(id)a8 reason:(long long)a9 complection:(id /* block */)a10;
- (void)dislikeRoomWithEnterFrom:(id)a0 enterMethod:(id)a1 reason:(long long)a2 complection:(id /* block */)a3;
- (void)dislikeRoomWithEnterFrom:(id)a0 enterMethod:(id)a1 multiReason:(id)a2 complection:(id /* block */)a3;
- (void)dislikeAdRoomWithEnterFrom:(id)a0 enterMethod:(id)a1 creativeID:(id)a2 adID:(id)a3 logExtra:(id)a4 enterTag:(id)a5 reason:(long long)a6 complection:(id /* block */)a7;
- (void)dislikeRoomWithEnterFrom:(id)a0 enterMethod:(id)a1 complection:(id /* block */)a2;
- (void)dislikeAdRoomWithEnterFrom:(id)a0 enterMethod:(id)a1 creativeID:(id)a2 adID:(id)a3 logExtra:(id)a4 enterTag:(id)a5 complection:(id /* block */)a6;
- (void)dislikeAdRoomWithEnterFrom:(id)a0 enterMethod:(id)a1 creativeID:(id)a2 adID:(id)a3 logExtra:(id)a4 enterTag:(id)a5 baseUrl:(id)a6 path:(id)a7 dislikeAdType:(id)a8 complection:(id /* block */)a9;
- (void).cxx_destruct;

@end
