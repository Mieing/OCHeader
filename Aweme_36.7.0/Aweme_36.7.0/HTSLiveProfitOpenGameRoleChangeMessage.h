@class HTSLiveCommon, NSMutableDictionary;

@interface HTSLiveProfitOpenGameRoleChangeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableDictionary *anchorIdToOpenGameRoleInfo;
@property (readonly, nonatomic) unsigned long long anchorIdToOpenGameRoleInfo_Count;

+ (id)descriptor;

@end
