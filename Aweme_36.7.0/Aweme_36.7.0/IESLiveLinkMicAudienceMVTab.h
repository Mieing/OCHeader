@class NSString;

@interface IESLiveLinkMicAudienceMVTab : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *name;

+ (id)descriptor;

@end
