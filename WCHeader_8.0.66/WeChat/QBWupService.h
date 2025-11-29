@class NSString, QBWupTransfer;

@interface QBWupService : NSObject {
    QBWupTransfer *_transfer;
    NSString *_servantName;
}

+ (id)service;

- (id)init;
- (id)initWithServant:(id)a0;
- (id)encodePackageWithFuncName:(id)a0 parameter:(id)a1;
- (id)invocation:(id)a0 parameter:(id)a1 completeHandle:(id /* block */)a2;
- (void).cxx_destruct;

@end
