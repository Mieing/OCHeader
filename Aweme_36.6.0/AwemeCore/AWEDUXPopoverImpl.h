@class NSString;

@interface AWEDUXPopoverImpl : NSObject <ACCDUXPopoverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createWithContent:(id)a0 target:(id)a1 clickBlock:(id /* block */)a2;

@end
