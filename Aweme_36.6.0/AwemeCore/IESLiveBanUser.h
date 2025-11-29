@class NSString;

@interface IESLiveBanUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *anchorExplain;
@property (copy, nonatomic) NSString *audienceExplain;
@property (copy, nonatomic) NSString *schemaURL;

+ (id)descriptor;

@end
