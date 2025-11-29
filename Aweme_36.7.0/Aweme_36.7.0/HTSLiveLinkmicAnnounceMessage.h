@class HTSLiveCommon, HTSLiveAnnounceInfo;

@interface HTSLiveLinkmicAnnounceMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int messageType;
@property (retain, nonatomic) HTSLiveAnnounceInfo *showingAnnounce;
@property (nonatomic) BOOL hasShowingAnnounce;

+ (id)descriptor;

@end
