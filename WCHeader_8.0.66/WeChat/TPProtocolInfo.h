@class NSString;

@interface TPProtocolInfo : NSObject

@property (readonly, nonatomic) NSString *protocolName;
@property (readonly, nonatomic) NSString *protocolVersion;

- (id)initWithProtocolName:(id)a0 protocolVersion:(id)a1;
- (void).cxx_destruct;

@end
