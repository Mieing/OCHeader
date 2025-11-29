@class AWEProfileExtensionAreaCommonParamModel, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaContainerProtocol;

@interface AWEProfileExtensionAreaFindMoreCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (weak, nonatomic) id<AWEProfileExtensionAreaContainerProtocol> delegate;
@property (nonatomic) long long actionType;
@property (nonatomic) long long popoverType;
@property (nonatomic) BOOL forceShowPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)configDelegate:(id)a0;
- (BOOL)isForcedToShowAfterHomePageRefresh;
- (BOOL)needToShowPopover;
- (void)configPopoverConfigModel:(id)a0;
- (BOOL)isFromHomePage;
- (void).cxx_destruct;

@end
