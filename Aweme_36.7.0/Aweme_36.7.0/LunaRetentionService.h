@class NSString, AWEStorage;

@interface LunaRetentionService : NSObject <AWEMusicStreamingImpl.LunaRetentionDelegate>

@property (nonatomic) double enterMiniTime;
@property (retain, nonatomic) AWEStorage *storage;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)sheetDidDismissWithReasion:(long long)a0;
- (void)showPopup;
- (BOOL)canShowPopup;
- (void)enterMini;
- (void)exitMini;
- (void)showPopupTrackParams:(id)a0 confirmBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (BOOL)p_hasMyMusicEntry;
- (BOOL)p_canShowPopup;
- (void)p_popupDidShow;
- (void).cxx_destruct;

@end
