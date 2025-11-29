@class NSString;

@interface ACCAdvanceEditToastView : NSObject <DVEToastProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showMessage:(id)a0 afterDele:(double)a1;
- (void)showInfo:(id)a0;

@end
