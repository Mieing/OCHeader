@class NSString;

@interface AWEFusePOIDetailNGManager : NSObject <AWEPOIDetailNGPopUpManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShowPOIDetailInModalView;
- (void)dismissNGDetailViewController:(id)a0;
- (void)popupPOIDetailNGWithTransitionInfo:(id)a0;

@end
