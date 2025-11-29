@class NSString;

@interface AWEDCFeedPreConnectController : AWEDCFeedBaseController <AWEDCFeedPreConnectControllerProtocol>

@property (nonatomic) BOOL hasPreConnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preConnect;

@end
