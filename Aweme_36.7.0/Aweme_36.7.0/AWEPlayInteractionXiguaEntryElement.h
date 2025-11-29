@class NSString, AWEXiGuaFeedEntryView;

@interface AWEPlayInteractionXiguaEntryElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEXiGuaFeedEntryView *xiguaEntryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)updateVideoSourceImageView;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
