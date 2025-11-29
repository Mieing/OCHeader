@class NSString;

@interface AWEInteractionCompliancePopupTool : NSObject <AWECompliancePopupToolProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enablePopupDialog;
+ (void)showDialogWithConfig:(id)a0 source:(unsigned long long)a1;
+ (id)convertSourceIntToString:(unsigned long long)a0;
+ (void)showDialogWithConfig:(id)a0 event:(id)a1 source:(unsigned long long)a2;


@end
