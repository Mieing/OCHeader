@protocol IESLiveRoomService;

@interface IESLiveStickerApi : HTSLiveApi

@property (nonatomic) long long uploadRequestVersion;
@property (nonatomic) long long auditRequestVersion;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)requestStickerList:(id /* block */)a0;
- (void)filterSensitiveWithText:(id)a0 textStickerID:(id)a1 callBack:(id /* block */)a2;
- (void)uploadStickers:(id)a0 callBack:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
