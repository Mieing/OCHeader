@class NSString, AWEShowPlayletCenterCardPageEntryView;

@interface AWEPlayInteractionPlayletCenterCardEntryElement : AWEPlayInteractionRightElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEShowPlayletCenterCardPageEntryView *entryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithContext:(id)a0;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)entryViewTapAction;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)context;

@end
