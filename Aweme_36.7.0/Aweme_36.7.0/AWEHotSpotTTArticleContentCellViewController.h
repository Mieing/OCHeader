@class NSString;

@interface AWEHotSpotTTArticleContentCellViewController : AWEAwemeDetailCellViewController <AWEHotSpotTTArticleContainerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFirstRender;
- (double)loadArticleInterval;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (id)createInteractionController;
- (id)webVC;

@end
