@class NSString;

@interface AWEACCNewVideoCoverAIRecommendNetServiceImpl : NSObject <ACCNewVideoCoverAIRecommendNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchAICoverWithZipURI:(id)a0 videoType:(unsigned long long)a1 coverNums:(long long)a2 completion:(id /* block */)a3;

@end
