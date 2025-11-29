@class NSNumber, NSString, NSDictionary;
@protocol AWEOpenAuthInfoOpenDataProtocol;

@interface AWEOpenAuthInfoModelV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoModelProtocol>

@property (retain, nonatomic) NSNumber *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) id<AWEOpenAuthInfoOpenDataProtocol> openData;
@property (retain, nonatomic) NSString *requestID;

+ (id)openDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
