@class HTSLiveCommon, HTSLiveShowMob;

@interface HTSLiveTickleToAnchorMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveShowMob *showMob;
@property (nonatomic) BOOL hasShowMob;

+ (id)descriptor;

@end
