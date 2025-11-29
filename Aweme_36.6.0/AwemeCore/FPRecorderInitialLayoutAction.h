@class AWERecordCloseViewHolder, FPPassthroughContext, NSString, AWERecordSelectMusicViewHolder, AWERecordPropEntranceViewHolder, AWERecordAuthViewHolder;

@interface FPRecorderInitialLayoutAction : NSObject <FPInitialLayoutAction>

@property (retain, nonatomic) AWERecordAuthViewHolder *auth;
@property (retain, nonatomic) AWERecordCloseViewHolder *close;
@property (retain, nonatomic) AWERecordPropEntranceViewHolder *propEntrance;
@property (retain, nonatomic) AWERecordSelectMusicViewHolder *selectMusic;
@property (retain, nonatomic) FPPassthroughContext *passthroughContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutWith:(id)a0;
- (void)layoutAuthViewIfNeedWith:(id)a0;
- (void)layoutCloseButtonIfNeedWith:(id)a0;
- (void)layoutPropEntranceButtonWith:(id)a0 layoutGuide:(id)a1;
- (void)layoutPropEntranceLabelWith:(id)a0 layoutGuide:(id)a1;
- (void)layoutSelectMusicIfNeedWith:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hitTestEdgeInsets;

@end
