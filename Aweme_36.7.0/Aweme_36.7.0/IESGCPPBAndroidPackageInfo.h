@class NSString;

@interface IESGCPPBAndroidPackageInfo : GPBMessage

@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *updateMessage;
@property (copy, nonatomic) NSString *version;

+ (id)descriptor;

@end
