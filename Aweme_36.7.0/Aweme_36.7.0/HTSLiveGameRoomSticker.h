@class GPBInt64Array;

@interface HTSLiveGameRoomSticker : IESLivePBBaseMessage

@property (nonatomic) long long needRenderStickerType;
@property (retain, nonatomic) GPBInt64Array *needRenderStickerListArray;
@property (readonly, nonatomic) unsigned long long needRenderStickerListArray_Count;

+ (id)descriptor;

@end
