@class NSString;

@interface MegaVideoWatchLaterModelCpp : MegaVideoFeedFlowModelCpp <MegaVideoWatchLaterModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createModel:(int)a0 autoApplyChanges:(BOOL)a1;

- (void)setAutoApplyChanges:(BOOL)a0;
- (void)onFeedWatchLaterStatusChanged:(id)a0 action:(int)a1;

@end
