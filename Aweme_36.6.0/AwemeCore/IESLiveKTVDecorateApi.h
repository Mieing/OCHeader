@protocol IESLiveRoomService;

@interface IESLiveKTVDecorateApi : HTSLiveApi

@property (weak, nonatomic) id<IESLiveRoomService> room;

- (void)handleApi:(id)a0 params:(id)a1 response:(id)a2;
- (void)changeDress:(struct KTVDecorateChangeDressParams { int x0; id x1; id x2; int x3; BOOL x4; long long x5; int x6; })a0 completion:(id /* block */)a1;
- (void)wearMidiSkin:(long long)a0 completion:(id /* block */)a1;
- (void)getTagListwithMode:(int)a0 completion:(id /* block */)a1;
- (void)getMidiListWithMode:(int)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
