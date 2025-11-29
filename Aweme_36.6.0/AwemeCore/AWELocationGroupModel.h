@class NSString, NSArray;

@interface AWELocationGroupModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *index;
@property (retain, nonatomic) NSArray *cities;
@property (nonatomic) BOOL hideLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
