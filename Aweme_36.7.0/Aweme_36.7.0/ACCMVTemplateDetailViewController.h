@class NSString, ACCMVTemplateInteractionViewController, ACCMVTemplateVideoPlayViewController, AWEVideoPublishViewModel, NSIndexPath, NSDictionary;
@protocol ACCMVTemplateModelProtocol;

@interface ACCMVTemplateDetailViewController : UIViewController

@property (retain, nonatomic) ACCMVTemplateVideoPlayViewController *videoPlayViewController;
@property (retain, nonatomic) ACCMVTemplateInteractionViewController *interactionViewController;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (copy, nonatomic) id /* block */ didPickTemplateBlock;
@property (retain, nonatomic) NSDictionary *musicDetailTrackParams;
@property (nonatomic) BOOL isFromMusicDetail;
@property (copy, nonatomic) NSString *preferedPickResourceButtonTitle;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *itemId;

- (void)enableFavoriteAbility:(BOOL)a0;
- (void)doFavoriteActionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)viewDidLoad;

@end
