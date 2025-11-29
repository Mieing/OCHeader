@class NSMutableDictionary, IESLiveRoomTagV3API, NSDictionary, IESLiveRoomTagV4API;

@interface IESLiveRoomTagManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *roomTagDictionary;
@property (retain, nonatomic) IESLiveRoomTagV3API *roomTagV3Api;
@property (retain, nonatomic) IESLiveRoomTagV4API *roomTagV4Api;
@property (retain, nonatomic) NSDictionary *liveClientAITag;

- (void)getRoomTag:(id)a0 completion:(id /* block */)a1;
- (id)getCurrentRoomTag:(id)a0;
- (id)getCurrentRoomTagDictionary:(id)a0;
- (long long)getCurrentRoomTag:(id)a0 withLevel:(long long)a1;
- (void)getRoomV4Tag:(id)a0 completion:(id /* block */)a1;
- (id)getCurrentRoomV4Tag:(id)a0;
- (id)getCurrentRoomV4TagDictionary:(id)a0;
- (long long)getCurrentRoomV4Tag:(id)a0 withLevel:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
