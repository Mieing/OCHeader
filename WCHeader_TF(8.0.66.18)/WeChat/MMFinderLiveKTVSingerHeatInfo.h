@class NSString, FinderLiveContact;

@interface MMFinderLiveKTVSingerHeatInfo : MMFinderLiveKTVHeatInfo

@property (copy, nonatomic) NSString *sdkUserId;
@property (retain, nonatomic) FinderLiveContact *finderLiveContact;
@property (copy, nonatomic) NSString *boardKey;
@property (nonatomic) unsigned int boardType;

- (unsigned long long)liveHeatValue;
- (void).cxx_destruct;

@end
