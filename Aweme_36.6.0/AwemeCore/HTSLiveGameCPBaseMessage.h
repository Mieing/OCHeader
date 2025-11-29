@class HTSLiveCommon, HTSLiveGameCPShowMessage;

@interface HTSLiveGameCPBaseMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveGameCPShowMessage *showInfo;
@property (nonatomic) BOOL hasShowInfo;

+ (id)descriptor;

@end
