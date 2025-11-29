@class HTSLiveCommon, IESLiveRealTimeChorusGiftDetail;

@interface HTSLiveKtvChorusPermissionMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int orderPermissionType;
@property (nonatomic) int joinPermissionType;
@property (retain, nonatomic) IESLiveRealTimeChorusGiftDetail *orderSongGift;
@property (nonatomic) BOOL hasOrderSongGift;
@property (retain, nonatomic) IESLiveRealTimeChorusGiftDetail *joinChorusGift;
@property (nonatomic) BOOL hasJoinChorusGift;

+ (id)descriptor;

@end
