@class NSString;

@interface CheckUidValidityReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *uidList;
@property (copy, nonatomic) NSString *uidOpenList;

+ (id)descriptor;

@end
