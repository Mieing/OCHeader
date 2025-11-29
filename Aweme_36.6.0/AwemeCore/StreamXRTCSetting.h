@class NSString;

@interface StreamXRTCSetting : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *linkmicIdStr;

+ (id)descriptor;

@end
