@class NSDictionary, NSMutableSet, FinderObjectAdvertisementInfo;

@interface WCFinderAdReportMeta : NSObject

@property (nonatomic) unsigned long long playCount;
@property (nonatomic) unsigned long long outerDuration;
@property (nonatomic) unsigned long long outerShowTimeStamp;
@property (nonatomic) unsigned long long commentAdOuterShowTimestamp;
@property (nonatomic) unsigned long long playTotalTime;
@property (nonatomic) unsigned long long videoTotalTime;
@property (retain, nonatomic) NSMutableSet *playSequenceSet;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) long long needReportCount;
@property (nonatomic) BOOL hasEndExpose;
@property (retain, nonatomic) NSDictionary *reportDict;
@property (retain, nonatomic) FinderObjectAdvertisementInfo *adInfo;

- (void).cxx_destruct;

@end
