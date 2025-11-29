@class NSString;

@interface APDeviceColorDelegateDef : NSObject <APDeviceColorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getColorLabel:(int)a0 biz:(id)a1 ext:(id)a2 error:(id *)a3;
- (void)updateColorLabel:(id)a0 label:(id)a1;

@end
