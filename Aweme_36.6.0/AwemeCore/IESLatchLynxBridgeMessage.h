@class NSString, NSDictionary;

@interface IESLatchLynxBridgeMessage : NSObject

@property (readonly, copy, nonatomic) NSString *methodName;
@property (readonly, copy, nonatomic) NSDictionary *rawData;
@property (readonly, copy, nonatomic) NSString *protocolVersion;
@property (readonly, copy, nonatomic) NSString *latchID;
@property (readonly, copy, nonatomic) NSString *namescope;
@property (readonly, copy, nonatomic) NSDictionary *data;

- (id)initWithMethodName:(id)a0 rawData:(id)a1;
- (void).cxx_destruct;

@end
