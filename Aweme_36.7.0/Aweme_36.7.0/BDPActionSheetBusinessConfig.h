@class BDPActionSheetViewController, NSString;

@interface BDPActionSheetBusinessConfig : NSObject <BDPActionSheetConfigProtocol>

@property (weak, nonatomic) BDPActionSheetViewController *actionSheetVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

@end
