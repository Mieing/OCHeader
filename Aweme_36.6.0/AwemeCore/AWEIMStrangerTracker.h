@class NSMutableSet;
@protocol AWEIMStrangerTrackeDelegate;

@interface AWEIMStrangerTracker : NSObject

@property (retain, nonatomic) NSMutableSet *trackCells;
@property (weak, nonatomic) id<AWEIMStrangerTrackeDelegate> delegate;

- (id)getToRelationTagWithChatModel:(id)a0;
- (id)getRelationTagWithChatModel:(id)a0;
- (void)trackSocialStrangerBoxShowWithCellCount:(long long)a0 unreadCellCount:(long long)a1 isSpam:(BOOL)a2;
- (void)trackEnterChatEvent:(id)a0;
- (void)trackClickStrangerCell:(id)a0;
- (BOOL)allowTrack:(id)a0;
- (void)addTrackCellWithModel:(id)a0;
- (void)trackEventWithDisplayCell:(id)a0;
- (void)trackEnterProfileEvent:(id)a0 from:(id)a1;
- (void)trackQuickSettingClearClick:(id)a0;
- (void)trackMarkAllReadPerformanceWithTime:(long long)a0;
- (void)trackClickReportEvent:(id)a0;
- (void)trackClickUnBlockEvent:(id)a0;
- (void)trackClickConfirmBlockEvent:(id)a0;
- (void)trackClickBlockEvent:(id)a0;
- (void)trackShowRevealViewEvent:(id)a0;
- (void)trackClickMoreActionButton;
- (void)trackClickTrashBinInMoreAction;
- (void)trackTabClick:(id)a0;
- (id)getFirstLabelWithViewModel:(id)a0;
- (id)getSecondLabelWithViewModel:(id)a0;
- (id)labelsParamsWithVM:(id)a0;
- (void)removeTrackCellWithModel:(id)a0;
- (void)trackDeleteChatEvent:(id)a0 indexPath:(id)a1 session:(id)a2 enterMethod:(id)a3;
- (void)bizTrackEnterProfileEvent:(id)a0 enterMethod:(id)a1;
- (void)trackClickTrash;
- (void)trackShowTrashBox;
- (void)trackQuickSettingPanelShow;
- (void)trackQuickSettingItemClick:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
