@class NSString;

@interface HTSLiveColumnLabel : IESLivePBBaseMessage

@property (nonatomic) int id_p;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveColumnLabel *subLabel;
@property (nonatomic) BOOL hasSubLabel;

+ (id)descriptor;

@end
