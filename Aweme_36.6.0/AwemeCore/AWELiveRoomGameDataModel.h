@class AWELiveGameRoomStickerModel, AWELiveGameTagInfoModel;

@interface AWELiveRoomGameDataModel : AWEBaseApiModel

@property (nonatomic) long long hasGameTagInfo;
@property (retain, nonatomic) AWELiveGameTagInfoModel *gameTagInfo;
@property (nonatomic) long long hasGameRoomSticker;
@property (retain, nonatomic) AWELiveGameRoomStickerModel *gameRoomSticker;

- (void).cxx_destruct;

@end
