@class AWEProfileExtensionAreaCommonParamModel, NSString;

@interface AWEProfileExtensionAreaCardDouPLusController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (nonatomic) BOOL hasShowTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (id)getDouPlusShowClickTrackParams;
- (void).cxx_destruct;

@end
