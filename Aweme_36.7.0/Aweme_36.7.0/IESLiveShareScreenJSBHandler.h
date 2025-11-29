@class NSString;
@protocol IESLivePiperProtocol;

@interface IESLiveShareScreenJSBHandler : NSObject <IESLivePiperHandlerProtocol>

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
