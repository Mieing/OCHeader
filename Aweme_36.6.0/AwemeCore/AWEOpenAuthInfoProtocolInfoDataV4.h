@class NSString, NSArray;

@interface AWEOpenAuthInfoProtocolInfoDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoProtocolInfoDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *fullPageProtocolList;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL protoShow;

+ (id)fullPageProtocolListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
