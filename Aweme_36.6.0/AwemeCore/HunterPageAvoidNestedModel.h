@class NSString, NSObject;
@protocol BDXBridgeContainerProtocol;

@interface HunterPageAvoidNestedModel : NSObject

@property (copy, nonatomic) NSString *bdxTag;
@property (copy, nonatomic) NSString *schema;
@property (weak, nonatomic) NSObject<BDXBridgeContainerProtocol> *container;

- (void).cxx_destruct;

@end
