@class NSString;
@protocol BDXBridgeContainerProtocol;

@interface BDXBridgeUploadToVODBaseService : NSObject

@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *traceId;

+ (BOOL)useBOE;

- (void).cxx_destruct;

@end
