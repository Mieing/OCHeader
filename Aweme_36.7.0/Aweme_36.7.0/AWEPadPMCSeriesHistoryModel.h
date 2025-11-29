@class NSString, NSArray, NSNumber;

@interface AWEPadPMCSeriesHistoryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *seriesID;
@property (copy, nonatomic) NSString *seriesName;
@property (retain, nonatomic) NSArray *coverUrl;
@property (copy, nonatomic) NSString *watchedItem;
@property (retain, nonatomic) NSNumber *wacthedTime;
@property (retain, nonatomic) NSNumber *watchedEpisode;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) long long calendarGroupID;
@property (retain, nonatomic) NSNumber *playVV;
@property (nonatomic) BOOL isExclusive;
@property (retain, nonatomic) NSArray *horizontalCoverUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
