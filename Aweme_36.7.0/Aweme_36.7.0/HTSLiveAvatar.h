@class NSString;

@interface HTSLiveAvatar : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *URLBig;
@property (copy, nonatomic) NSString *URLMid;
@property (copy, nonatomic) NSString *URLSmall;

+ (id)descriptor;

@end
