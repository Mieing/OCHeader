@class AWEProfileExtensionAreaCommonParamModel, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AFDProfileExtensionAreaSchoolCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

@end
