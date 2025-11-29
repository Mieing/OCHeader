@class HTSLiveCommon;

@interface HTSLiveAdminRecordHandleMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int handleType;

+ (id)descriptor;

@end
