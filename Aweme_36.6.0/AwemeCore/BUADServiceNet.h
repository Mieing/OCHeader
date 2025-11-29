@class NSString;

@interface BUADServiceNet : NSObject <BUADServiceNetProtocol>

@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cloneInstance:(id /* block */)a0;
- (id)adServiceVersion;
- (void)setnamea:(id)a0;
- (id)getRequestSerializer;
- (id)getJsonRequestSerializer;
- (id)getJsonResponseSerializer;
- (id)getCommonRequest;
- (void).cxx_destruct;

@end
