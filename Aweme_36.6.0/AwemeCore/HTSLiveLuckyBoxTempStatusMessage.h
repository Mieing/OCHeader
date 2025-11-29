@class HTSLiveCommon;

@interface HTSLiveLuckyBoxTempStatusMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
