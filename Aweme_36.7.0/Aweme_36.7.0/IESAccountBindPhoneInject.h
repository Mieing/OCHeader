@class NSString;

@interface IESAccountBindPhoneInject : NSObject <IESAccountBindPhoneDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindPhoneSuccessWithPhone:(id)a0;
- (id)currentBindPhone;

@end
