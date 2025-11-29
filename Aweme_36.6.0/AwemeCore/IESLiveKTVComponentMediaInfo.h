@class NSString;

@interface IESLiveKTVComponentMediaInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *ktvLiveCoreExtInfo;

+ (id)descriptor;

@end
