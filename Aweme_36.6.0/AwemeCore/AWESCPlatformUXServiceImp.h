@class NSString;

@interface AWESCPlatformUXServiceImp : NSObject <BDSCPlatformUXService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pendantHostWindow;
- (id)showTipOnView:(id)a0 contentText:(id)a1 buttonText:(id)a2 bottomOffset:(double)a3 buttonAction:(id /* block */)a4;
- (id)showPopoverWithText:(id)a0 onView:(id)a1 target:(id)a2;
- (id)showPopoverWithText:(id)a0 position:(unsigned long long)a1 onView:(id)a2 target:(id)a3;
- (id)tvIconImage;
- (id)tvDisconnectIconImage;

@end
