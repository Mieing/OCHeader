@class NSString;

@interface AWEACCTextInputControllerFactoryImpl : NSObject <ACCTextInputControllerFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTextInputController:(id)a0;
- (id)createUserPicker:(unsigned long long)a0;

@end
