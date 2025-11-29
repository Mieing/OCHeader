@class NSString;

@interface MobileGameTab : IESLivePBBaseMessage

@property (nonatomic) BOOL isMobileGameAnchor;
@property (nonatomic) BOOL isAccepted;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
