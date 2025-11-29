@class NSNumber, NSString, NSDictionary;

@interface AWEAdMultiPlatformPreferredModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *linkID;
@property (copy, nonatomic) NSString *openURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
