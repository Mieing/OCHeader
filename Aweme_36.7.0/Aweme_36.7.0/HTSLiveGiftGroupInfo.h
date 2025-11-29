@class NSString;

@interface HTSLiveGiftGroupInfo : IESLivePBBaseMessage

@property (nonatomic) int groupCount;
@property (copy, nonatomic) NSString *groupText;

+ (id)descriptor;

@end
