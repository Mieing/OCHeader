@class NSString;

@interface GetCommentControlStatusResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long status;
@property (nonatomic) long long commentControlLevel;
@property (nonatomic) long long abilityQualification;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
