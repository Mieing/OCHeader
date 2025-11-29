@class NSString, AWEScreenCastItemRequestService;
@protocol AWEScreenCastProcessorDelegate;

@interface AWEScreenCastProcessor : NSObject <AWEScreenCastItemRequestServiceDelegate, AWEScreenCastProcessor>

@property (retain, nonatomic) AWEScreenCastItemRequestService *itemFetcher;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEScreenCastProcessorDelegate> delegate;

- (BOOL)canContinuePlay;
- (void)prefetchPlayItemWithModel:(id)a0;
- (void)fetchPlayItemWithModel:(id)a0 withCompletion:(id /* block */)a1;
- (id)filterUnSupportedModelsWith:(id)a0;
- (void)screenCastDidFetchPlayItem:(id)a0 onError:(id)a1;
- (id)getScreenCastURLFromVideoModel:(id)a0;
- (BOOL)checkExpireURLString:(id)a0;
- (void)sendUrlExpireEvent;
- (void).cxx_destruct;

@end
