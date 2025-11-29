@class NSArray, NSNumber, NSString;

@interface AWEAwemePlayVideoFullTextSectionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *sentences;
@property (readonly, nonatomic) NSNumber *startTime;
@property (readonly, nonatomic) NSNumber *endTime;
@property (readonly, nonatomic) NSString *paragraphTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sentencesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
