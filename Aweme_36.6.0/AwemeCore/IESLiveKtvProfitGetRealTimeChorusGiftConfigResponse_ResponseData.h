@class NSMutableArray, IESLiveRealTimeChorusGiftDetail;

@interface IESLiveKtvProfitGetRealTimeChorusGiftConfigResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *chorusGiftsArray;
@property (readonly, nonatomic) unsigned long long chorusGiftsArray_Count;
@property (retain, nonatomic) IESLiveRealTimeChorusGiftDetail *selectedGift;
@property (nonatomic) BOOL hasSelectedGift;

+ (id)descriptor;

@end
