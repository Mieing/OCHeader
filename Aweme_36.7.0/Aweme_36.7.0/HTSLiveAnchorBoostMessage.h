@class HTSLiveAnchorBoost, HTSLiveCommon, HTSLivePublicAreaCommon;

@interface HTSLiveAnchorBoostMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveAnchorBoost *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;

+ (id)descriptor;

@end
