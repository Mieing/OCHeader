@class NSString;

@interface HTSLiveGiftTextInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *defaultGiftMainText;
@property (copy, nonatomic) NSString *defaultGiftSubText;

+ (id)descriptor;

@end
