@class IESLiveUserProfileData, IESLiveMyLiveVisitorEntryViewModel, NSArray, IESLiveUserCardStore, IESLiveMyLiveTabViewModel, NSString;

@interface IESLiveMyLiveViewModel : NSObject <IESLiveUserCardDidFinishedAction>

@property (retain, nonatomic) IESLiveUserProfileData *metaData;
@property (retain, nonatomic) IESLiveUserCardStore *userCardStore;
@property (nonatomic) double showTimestamp;
@property (retain, nonatomic) IESLiveMyLiveVisitorEntryViewModel *visitorEntryViewModel;
@property (copy, nonatomic) NSArray *myTabs;
@property (retain, nonatomic) IESLiveMyLiveTabViewModel *selectedTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithMetaData:(id)a0 diContext:(id)a1;
- (void)trackEnterTab:(id)a0 fromTab:(id)a1;
- (void)trackMyLiveShow;
- (void)createMultiTabsData;
- (void)userCardDidFinishedAction;
- (void)trackMyLiveShowDuration;
- (void)setupUserCardStore:(id)a0;
- (void).cxx_destruct;

@end
