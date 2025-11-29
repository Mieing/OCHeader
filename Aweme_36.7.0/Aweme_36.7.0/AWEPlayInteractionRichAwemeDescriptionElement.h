@class NSString;
@protocol AWERichAwemeDescriptionElementViewControllerProtocol;

@interface AWEPlayInteractionRichAwemeDescriptionElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) id<AWERichAwemeDescriptionElementViewControllerProtocol> descriptionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
