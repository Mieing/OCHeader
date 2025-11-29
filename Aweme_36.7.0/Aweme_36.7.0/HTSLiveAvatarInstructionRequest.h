@class HTSLiveAvatarCommon, NSString;

@interface HTSLiveAvatarInstructionRequest : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAvatarCommon *bizCommon;
@property (nonatomic) BOOL hasBizCommon;
@property (nonatomic) int instruction;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *answer;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
