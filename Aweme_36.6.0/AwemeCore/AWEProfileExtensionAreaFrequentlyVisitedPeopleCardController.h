@class AWEProfileExtensionAreaCommonParamModel, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWEProfileExtensionAreaFrequentlyVisitedPeopleCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void).cxx_destruct;

@end
