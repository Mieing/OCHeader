@class NSString;

@interface WCFinderLiveNoticeInfoCache : NSObject

@property (copy, nonatomic) NSString *noticeId;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;

@end
