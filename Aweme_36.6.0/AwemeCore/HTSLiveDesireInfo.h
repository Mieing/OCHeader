@class NSString;

@interface HTSLiveDesireInfo : IESLivePBBaseMessage

@property (nonatomic) long long desireId;
@property (copy, nonatomic) NSString *desireIdStr;

+ (id)descriptor;

@end
