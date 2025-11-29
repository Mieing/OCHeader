@class NSString;

@interface AWEGDContainerMainRequestProvider : NSObject <AWEGDContainerMainRequestProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pageScheme:(id)a0 params:(id)a1 headers:(id)a2 cache:(BOOL)a3 ditoRequestCreated:(id /* block */)a4;
- (void)disasterPageScheme:(id)a0 path:(id)a1 params:(id)a2 headers:(id)a3 ditoRequestCreated:(id /* block */)a4;

@end
