@class NSString, AWEVideoPublishViewModel;

@interface AWEAIMusicRecommendTask : NSObject

@property (copy, nonatomic) NSString *taskIdentifier;
@property (nonatomic) unsigned long long musicFetchType;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) AWEVideoPublishViewModel *model;
@property (nonatomic) long long count;

+ (id)errorOfAIRecommend;

- (void)fetchAIMusicListWithURI:(id)a0 bachResult:(id)a1 otherParam:(id)a2 callback:(id /* block */)a3;
- (void)p_fetchDataFinishedAndReset;
- (void)p_fetchAIRecommendData:(unsigned long long)a0 zipURI:(id)a1 bachResult:(id)a2 count:(long long)a3 otherParam:(id)a4 callback:(id /* block */)a5;
- (unsigned long long)p_assetsCount;
- (id)initWithIdentifier:(id)a0 publishModel:(id)a1 count:(long long)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
