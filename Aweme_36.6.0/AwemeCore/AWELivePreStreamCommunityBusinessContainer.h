@class AWELivePreStreamContext, AWELivePreStreamConfigCenter;

@interface AWELivePreStreamCommunityBusinessContainer : AWELivePreStreamBusinessBaseContainer

@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (retain, nonatomic) AWELivePreStreamConfigCenter *configCenter;

- (void).cxx_destruct;

@end
