@class NSString, UINavigationController, MMFinderLiveQrCodeSessionSelectController;

@interface MMFinderLiveSessionSelectHandle : NSObject <SessionSelectControllerDelegate>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) UINavigationController *navVC;
@property (retain, nonatomic) NSString *qrCodeUri;
@property (retain, nonatomic) MMFinderLiveQrCodeSessionSelectController *sessionSelectController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushLiveSessionSelectUserName:(id)a0 currentNavController:(id)a1 qrCodeUri:(id)a2;
- (void)pushSelectViewController;
- (void).cxx_destruct;

@end
