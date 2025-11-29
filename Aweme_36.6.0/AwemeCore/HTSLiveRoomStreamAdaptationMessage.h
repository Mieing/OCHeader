@class HTSLiveCommon;

@interface HTSLiveRoomStreamAdaptationMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int adaptationType;
@property (nonatomic) float adaptationHeightRatio;
@property (nonatomic) float adaptationBodyCenterRatio;
@property (nonatomic) float adaptationContentTopRatio;
@property (nonatomic) float adaptationContentBottomRatio;

+ (id)descriptor;

@end
