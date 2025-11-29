@class NSString, NSArray, NSNumber;

@interface AWEAwemeSearchVideoAbstractSectionModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) NSString *sectionTitle;
@property (readonly, nonatomic) NSString *sectionContent;
@property (retain, nonatomic) NSArray *textExtras;
@property (readonly, nonatomic) NSNumber *jumpTime;
@property (readonly, nonatomic) NSNumber *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textExtrasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
