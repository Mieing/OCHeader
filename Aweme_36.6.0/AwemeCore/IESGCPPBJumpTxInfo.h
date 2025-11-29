@class NSString;

@interface IESGCPPBJumpTxInfo : GPBMessage

@property (nonatomic) int jumpTxType;
@property (copy, nonatomic) NSString *miniId;
@property (copy, nonatomic) NSString *miniPath;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) int miniType;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) int accessType;

+ (id)descriptor;

@end
