@class NSString;

@interface ACCElementBindDataSource : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) long long sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithSourceID:(id)a0 sourceType:(long long)a1;
- (void).cxx_destruct;

@end
