@class AWEUndertakeActionBackupToast, NSString, AWEUndertakeActionLynxPopup, AWEUndertakeActionFeedBottomBanner;

@interface AWEUndertakeDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUndertakeActionLynxPopup *lynxPopupAction;
@property (retain, nonatomic) AWEUndertakeActionFeedBottomBanner *feedBottomBannerAction;
@property (retain, nonatomic) AWEUndertakeActionBackupToast *backupToastAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
