@class AWEProfileExtensionAreaCommonParamModel, NSDictionary, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaContainerProtocol;

@interface AWEIronManGuestProfileEntryController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (nonatomic) BOOL shouldReported;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardNewView;
@property (weak, nonatomic) id<AWEProfileExtensionAreaContainerProtocol> delegate;
@property (retain, nonatomic) NSDictionary *trackData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)configDelegate:(id)a0;
- (void)cardDidDisappear;
- (id)cardModel;
- (void)sendExposeTrackEvent;
- (void)sendClickTrackEvent;
- (void).cxx_destruct;
- (id)init;
- (void)setCardData:(id)a0;

@end
