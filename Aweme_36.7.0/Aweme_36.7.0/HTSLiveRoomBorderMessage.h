@class HTSLiveBorderInfo, HTSLiveCommon;

@interface HTSLiveRoomBorderMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveBorderInfo *borderInfo;
@property (nonatomic) BOOL hasBorderInfo;

+ (id)descriptor;

@end
