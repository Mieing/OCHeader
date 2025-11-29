@class AffBizCgiProxy, NSString;

@interface AffBizService : MMUserService <MMServiceProtocol>

@property (class, readonly, nonatomic) AffBizService *shared;

@property (retain, nonatomic) AffBizCgiProxy *cgiProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
