@class NSString, NSArray;

@interface AWEDTOChapterDetail : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSArray *points;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pointsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
