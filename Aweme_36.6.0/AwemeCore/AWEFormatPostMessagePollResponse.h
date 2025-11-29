@class NSString;

@interface AWEFormatPostMessagePollResponse : NSObject

@property (nonatomic) long long publishId;
@property (copy, nonatomic) NSString *videoUrl;
@property (nonatomic) long long remainTime;
@property (nonatomic) long long currentProgressPercent;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *loadingHint;
@property (copy, nonatomic) NSString *coverImageUrl;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
