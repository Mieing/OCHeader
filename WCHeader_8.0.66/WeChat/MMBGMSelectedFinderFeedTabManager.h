@class NSString, MMBGMChooseFinderFeedListView;

@interface MMBGMSelectedFinderFeedTabManager : NSObject <MMBGMTabManagerProtocol>

@property (weak, nonatomic) MMBGMChooseFinderFeedListView *feedListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
