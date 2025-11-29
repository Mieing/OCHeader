@class NSString, HTSLiveCommon;

@interface IESGCPPBTeamPlayApplyPermitMessage : GPBMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
