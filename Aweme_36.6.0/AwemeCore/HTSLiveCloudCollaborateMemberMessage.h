@class HTSLiveCloudCollaborateInfo, HTSLiveCommon;

@interface HTSLiveCloudCollaborateMemberMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveCloudCollaborateInfo *info;
@property (nonatomic) BOOL hasInfo;

+ (id)descriptor;

@end
