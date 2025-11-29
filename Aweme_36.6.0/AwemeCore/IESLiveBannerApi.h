@class NSNumber;

@interface IESLiveBannerApi : HTSLiveApi

@property (nonatomic) unsigned long long bannerRole;
@property (readonly, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *liveAdType;

- (id)initWithRoomID:(id)a0;
- (id)initWithRole:(unsigned long long)a0 roomID:(id)a1;
- (void)fetchLivePageBannersWithPageType:(id)a0 callback:(id /* block */)a1;
- (void)fetchInRoomBannersWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
