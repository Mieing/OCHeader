@class NSString;

@interface IESIMMessagePropertyDataManager : NSObject <IESIMMessagePropertyDataManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modifyPropertyItems:(id)a0 ofMessage:(id)a1 onCompletion:(id /* block */)a2;

@end
