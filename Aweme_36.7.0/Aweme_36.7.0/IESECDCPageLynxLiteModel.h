@class NSString, NSDictionary;

@interface IESECDCPageLynxLiteModel : MTLModel <MTLJSONSerializing, IESECLLDCLynxViewDataProtocol>

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSDictionary *metaData;
@property (retain, nonatomic) NSDictionary *epSKUInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithLyxElement:(id)a0;
- (void).cxx_destruct;

@end
