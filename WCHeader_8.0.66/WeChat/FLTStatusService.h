@class FLTStatusCallbackProcessor, FLTStatusRegisterCmdIdHandler, NSString;

@interface FLTStatusService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) FLTStatusCallbackProcessor *callbackProcessor;
@property (retain, nonatomic) FLTStatusRegisterCmdIdHandler *registerCmdIdHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
