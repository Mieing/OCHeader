@class NSString;

@interface IESGCPPBBetaNoticeInfo : GPBMessage

@property (copy, nonatomic) NSString *noticeTitle;
@property (copy, nonatomic) NSString *betaTime;
@property (nonatomic) long long totalNum;
@property (copy, nonatomic) NSString *totalNumStr;

+ (id)descriptor;

@end
