@class NSString, MMFinderLiveStreamTypeInfo, WCFinderLiveInfo;

@interface MMFinderLiveInfoWrap : NSObject

@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) WCFinderLiveInfo *finderLiveInfo;
@property (nonatomic) unsigned long long liveInfoUpdateTime;
@property (nonatomic) unsigned long long activityType;
@property (nonatomic) unsigned long long activityTypeUpdateTime;
@property (retain, nonatomic) MMFinderLiveStreamTypeInfo *finderLiveStreamTypeInfo;

- (void).cxx_destruct;

@end
