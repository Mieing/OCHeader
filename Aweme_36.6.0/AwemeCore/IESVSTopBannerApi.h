@class NSNumber;

@interface IESVSTopBannerApi : HTSLiveApi

@property (nonatomic) unsigned long long bannerRole;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *episodeID;
@property (retain, nonatomic) NSNumber *liveAdType;

- (id)initWithRole:(unsigned long long)a0 roomID:(id)a1 episodeID:(id)a2;
- (void)fetchVSVideoTopBannersCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
