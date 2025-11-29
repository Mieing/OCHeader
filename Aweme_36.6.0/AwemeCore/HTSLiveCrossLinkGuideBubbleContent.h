@class NSString, HTSLiveText;

@interface HTSLiveCrossLinkGuideBubbleContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
