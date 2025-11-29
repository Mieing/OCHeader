@class HTSLiveWelfareProjectInfo, HTSLiveCommon;

@interface HTSLiveWelfareProjectOperateMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long opType;
@property (retain, nonatomic) HTSLiveWelfareProjectInfo *project;
@property (nonatomic) BOOL hasProject;

+ (id)descriptor;

@end
