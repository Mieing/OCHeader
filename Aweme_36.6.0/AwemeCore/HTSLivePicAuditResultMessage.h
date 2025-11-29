@class NSString, HTSLiveCommon;

@interface HTSLivePicAuditResultMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *auditId;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *URL;
@property (nonatomic) int auditStatus;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
