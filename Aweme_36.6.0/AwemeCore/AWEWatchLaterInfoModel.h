@class NSString;

@interface AWEWatchLaterInfoModel : AWEBaseApiModel

@property (nonatomic) long long listNum;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long addTimestamp;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL isJustAdd;
@property (nonatomic) BOOL hasRecoverPlayProgress;
@property (nonatomic) BOOL isReportProgress;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
