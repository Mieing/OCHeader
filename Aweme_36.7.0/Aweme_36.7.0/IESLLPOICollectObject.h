@class NSDictionary;

@interface IESLLPOICollectObject : NSObject

@property (nonatomic) BOOL isRequestOnAir;
@property (weak, nonatomic) id actionSender;
@property (retain, nonatomic) NSDictionary *loginTrackerInformation;

- (void)doActionWithPOIID:(id)a0 awemeID:(id)a1 collect:(BOOL)a2 needHintToast:(BOOL)a3 extraParams:(id)a4 loginResult:(id /* block */)a5 completion:(id /* block */)a6;
- (void)doActionWithPOIID:(id)a0 awemeID:(id)a1 collect:(BOOL)a2 needHintToast:(BOOL)a3 extraParams:(id)a4 customTracker:(id /* block */)a5 loginResult:(id /* block */)a6 completion:(id /* block */)a7;
- (void)p_broadcastCollectStatus:(BOOL)a0 poiID:(id)a1;
- (void)doActionWithPOIID:(id)a0 collect:(BOOL)a1 needHintToast:(BOOL)a2 extraParams:(id)a3 loginResult:(id /* block */)a4 completion:(id /* block */)a5;
- (void)requestRawFavoriteItemWithConfig:(id)a0 isCollect:(BOOL)a1 needHintToast:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
