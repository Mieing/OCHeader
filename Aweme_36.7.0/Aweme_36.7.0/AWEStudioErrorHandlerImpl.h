@class NSString;

@interface AWEStudioErrorHandlerImpl : NSObject <AWEStudioErrorHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleError:(id)a0 fromViewController:(id)a1;
- (BOOL)needShowAWEApiErrorDescription:(id)a0;

@end
