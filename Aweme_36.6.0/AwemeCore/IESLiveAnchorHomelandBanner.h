@class NSString;

@interface IESLiveAnchorHomelandBanner : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *anchorHomelandInfo;
@property (nonatomic) int height;

+ (id)descriptor;

@end
