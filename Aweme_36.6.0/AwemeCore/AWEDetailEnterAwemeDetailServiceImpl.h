@class NSString;
@protocol AWEDetailEnterAwemeDetailHost;

@interface AWEDetailEnterAwemeDetailServiceImpl : NSObject <AWEDetailEnterAwemeDetailService>

@property (weak, nonatomic) id<AWEDetailEnterAwemeDetailHost> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterAwemeDetailWithIndexPath:(id)a0 awemeModel:(id)a1;
- (id)enterAwemeDetailTransitionStartViewWithIndexPath:(id)a0 collectionView:(id)a1 itemOffset:(long long)a2;
- (void).cxx_destruct;

@end
