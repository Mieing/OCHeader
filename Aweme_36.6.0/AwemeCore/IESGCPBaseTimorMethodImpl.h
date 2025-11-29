@class NSString;

@interface IESGCPBaseTimorMethodImpl : NSObject <IESGCPTimorMethodImplProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodName;

- (void)callWithParams:(id)a0 completionHandler:(id /* block */)a1;

@end
