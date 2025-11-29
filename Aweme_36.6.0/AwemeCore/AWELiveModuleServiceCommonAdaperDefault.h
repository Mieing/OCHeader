@interface AWELiveModuleServiceCommonAdaperDefault : NSObject

- (void)fetchGiftListWithParams:(id)a0 completion:(id /* block */)a1;
- (void)sendGiftWithParams:(id)a0 diamondCount:(long long)a1 completion:(id /* block */)a2;
- (void)trackSendGiftSuccessWithParams:(id)a0;

@end
