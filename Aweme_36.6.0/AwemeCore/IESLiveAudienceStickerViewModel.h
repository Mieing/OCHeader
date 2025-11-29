@class HTSEventContext, IESLiveStickerNewModel, IESLiveStickerApi, IESLiveStickerItemNewModel;
@protocol IESLiveRoomService;

@interface IESLiveAudienceStickerViewModel : NSObject

@property (retain, nonatomic) IESLiveStickerApi *stickerApi;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveStickerNewModel *stickerModel;
@property (retain, nonatomic) IESLiveStickerItemNewModel *imageStickerModel;
@property (retain, nonatomic) IESLiveStickerItemNewModel *textStickerModel;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)didSetAttachingDIContext;
- (id)initWithRoomModel:(id)a0;
- (void)getStickerInfoWithStickerId:(id)a0 completion:(id /* block */)a1;
- (void)loadRoomSticker;
- (void)handleDecorationMessage:(id)a0;
- (void)handleTextSticker:(id)a0 imageSticker:(id)a1;
- (void)useAudienceTextSticker:(id)a0;
- (void)removeAudienceTextSticker;
- (void)useAudienceImageSticker:(id)a0;
- (void)removeAudienceImageSticker;
- (void).cxx_destruct;

@end
