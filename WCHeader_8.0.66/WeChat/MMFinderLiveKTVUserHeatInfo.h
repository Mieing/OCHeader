@class NSString, NSMutableDictionary;

@interface MMFinderLiveKTVUserHeatInfo : MMFinderLiveKTVHeatInfo

@property (retain, nonatomic) NSString *liveMeetId;
@property (nonatomic) unsigned long long anchorHeatValue;
@property (retain, nonatomic) NSMutableDictionary *singerHeatInfoDict;

- (unsigned long long)liveHeatValue;
- (void).cxx_destruct;

@end
