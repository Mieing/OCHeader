@class NSString;

@interface AWEStudioMusicViewBuilderImpl : NSObject <ACCMusicViewBuilderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildFeedbackEntranceViewWithIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 normalText:(id)a2 normalTextColor:(id)a3 highlightText:(id)a4 highlightTextColor:(id)a5 fontSize:(double)a6 highlightTapAction:(id /* block */)a7;
- (id)searchLynxCollectMusicNotification;
- (id)searchLynxShootNotification;
- (id)searchLynxAudioPlayNotification;
- (id)searchLynxEditMusicNotification;
- (double)heightForDynamicMusicCollectionCellWithData:(id)a0;
- (id)cellForDymaicMusicCollectionCellWithData:(id)a0 tableView:(id)a1 delegate:(id)a2;
- (void)tableViewCellsTriggerAppear:(id)a0;
- (void)tableViewCellsTriggerDisappear:(id)a0;
- (void)tableViewCellTriggerShow:(id)a0;
- (void)tableViewCellTriggerHide:(id)a0;
- (id)router_pathComponentArrayOfSchema:(id)a0;
- (void)transitionWithURLString:(id)a0 completion:(id /* block */)a1;
- (void)transitionWithURLString:(id)a0 appendQuires:(id)a1 completion:(id /* block */)a2;
- (id)cellForDymaicMusicCollectionCellWithData:(id)a0 tableView:(id)a1 indexPath:(id)a2 delegate:(id)a3;

@end
