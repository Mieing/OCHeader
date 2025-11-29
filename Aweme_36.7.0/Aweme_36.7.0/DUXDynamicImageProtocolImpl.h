@class NSString;

@interface DUXDynamicImageProtocolImpl : NSObject <DUXDynamicImageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dynamicImageWithResolveBlock:(id /* block */)a0;


@end
