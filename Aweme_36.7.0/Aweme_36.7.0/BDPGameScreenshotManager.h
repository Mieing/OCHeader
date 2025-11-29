@class BDPGameScreenshotPopupView, BDPUniqueID, NSString;

@interface BDPGameScreenshotManager : NSObject <BDPGameScreenshotPopupViewDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) BDPGameScreenshotPopupView *popView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleScreenshot:(id)a0;
- (void)registerMessage;
- (void)didClickShare:(id)a0;
- (void)event:(id)a0 extra:(id)a1;
- (void)sendScreenshotMessage;
- (id)buildAnchorInfo:(id)a0;
- (id)buildShareID;
- (id)buildSchema:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;

@end
