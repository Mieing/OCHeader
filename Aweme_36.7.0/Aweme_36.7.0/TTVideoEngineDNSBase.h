@class NSString;
@protocol TTVideoEngineDNSProtocol;

@interface TTVideoEngineDNSBase : NSObject <TTVideoEngineDNSBaseProtocol>

@property (weak, nonatomic) id<TTVideoEngineDNSProtocol> delegate;
@property (copy, nonatomic) NSString *hostname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
