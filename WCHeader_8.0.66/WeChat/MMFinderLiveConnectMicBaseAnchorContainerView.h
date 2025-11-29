@class FinderLiveAiAssistantNotification, NSArray, MMFinderLiveConnectMicAnchorContainerReporterExtInfo, MMFinderLiveLastBufferHandler, NSMutableArray;

@interface MMFinderLiveConnectMicBaseAnchorContainerView : MMFinderLiveConnectMicBaseContainerView

@property (readonly, nonatomic) NSMutableArray *candicateAnchorList;
@property (readonly, nonatomic) NSArray *connectingAnchorUserList;
@property (weak, nonatomic) FinderLiveAiAssistantNotification *aiAssistantInfo;
@property (retain, nonatomic) MMFinderLiveConnectMicAnchorContainerReporterExtInfo *anchorContainerReporterExtInfo;
@property (retain, nonatomic) MMFinderLiveLastBufferHandler *candicateLastBufferCache;

- (void)resetCandicateAnchorList;
- (void)updateWithConnectMicUserList:(id)a0 connectingAnchorUserList:(id)a1 forceDisableApplySectionCellButton:(BOOL)a2 animted:(BOOL)a3;
- (void).cxx_destruct;

@end
