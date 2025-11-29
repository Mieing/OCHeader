@class NSString;

@interface WCFinderPublishTabViewModel : WCFinderChooseFeedTabViewModel <WCFinderPostDataItemExt>

@property (nonatomic) unsigned long long maxId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)tabTitle;
- (void)loadData:(BOOL)a0;
- (int)tabType;
- (BOOL)isPublishTabModel;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;

@end
