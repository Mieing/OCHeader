@class IESLiveDanmakuNodeFactory;
@protocol IESLiveRoomService;

@interface IESLiveCarnivalDanmakuNodeFactory : NSObject

@property (retain, nonatomic) IESLiveDanmakuNodeFactory *danmakuNodeFactory;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (id)carnivalDanmakuNodeFromMessage:(id)a0 settings:(id)a1 emoticonParser:(id)a2;
- (void)carnivalDanmakuNodeFromMessage:(id)a0 settings:(id)a1 emoticonParser:(id)a2 completion:(id /* block */)a3;
- (void)resetCarnivalDanmakuNodes:(id)a0 settings:(id)a1 emoticonParser:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
