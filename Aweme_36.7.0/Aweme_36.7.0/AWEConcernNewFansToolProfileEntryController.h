@class AWEProfileExtensionAreaCommonParamModel, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWEConcernNewFansToolProfileEntryController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

@end
