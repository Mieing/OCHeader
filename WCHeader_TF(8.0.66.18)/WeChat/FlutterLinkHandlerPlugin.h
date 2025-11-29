@class WAAppIdToUsernameTransfer, NSString;

@interface FlutterLinkHandlerPlugin : NSObject <MMFlutterPlugin, LinkHandlerApi>

@property (retain, nonatomic) WAAppIdToUsernameTransfer *appIdTransfer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)openLinkUrl:(id)a0 error:(id *)a1;
- (void)openWeAppLinkLinkWrap:(id)a0 error:(id *)a1;
- (void)openLocationLinkWrap:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
