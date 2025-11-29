@class NSString, NSNumber;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionPresenterMethodDelegate, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate;

@interface AWEInteractionPreloadModel : NSObject <AWEInteractionPreloadModelProtocol>

@property (retain, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionPresenterMethodDelegate, AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) unsigned long long spreadState;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isBackup;
@property (retain, nonatomic) NSNumber *indexInFeed;
@property (copy, nonatomic) NSString *spreadGroupID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateInteractionVCWithModel:(id)a0;
- (void)removeInteractionVCFromSuperview;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
