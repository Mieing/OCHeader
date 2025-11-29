@class NSString, BDPUniqueID, UIView;
@protocol BDPCustomExitPopupRevisitEducationViewsProtocol;

@interface BDPRevisitEducationViewController : BDPBaseAlertViewController

@property (nonatomic) BOOL hasOption;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ exitAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) NSString *revisitEducationTitle;
@property (copy, nonatomic) NSString *revisitEducationDesc;
@property (copy, nonatomic) NSString *revisitEducationImageURL;
@property (retain, nonatomic) UIView<BDPCustomExitPopupRevisitEducationViewsProtocol> *revisitEducationView;
@property (nonatomic) unsigned long long revisitEducationScene;

+ (id)getSettings;
+ (BOOL)shouldShowRevisitEducationViewWithUniqueID:(id)a0 info:(id)a1;
+ (BOOL)preCheckShouldShowRevisitEducationViewWithUniqueID:(id)a0;
+ (void)prefetchImageIfNeed;
+ (BOOL)showRevisitEducationViewWithUniqueID:(id)a0 scene:(unsigned long long)a1;

- (id)initWithUniqueID:(id)a0 exitAction:(id /* block */)a1 hasOption:(BOOL)a2 scene:(unsigned long long)a3;
- (void)_eventWithName:(id)a0 params:(id)a1;
- (id)initWithUniqueID:(id)a0 scene:(unsigned long long)a1;
- (void)fetchRevisitEducationViewConfig;
- (id)_getHostRevisitEducationViewWithUniqueID:(id)a0 imageURL:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)alertView;

@end
