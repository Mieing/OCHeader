@class NSString, NSNumber;

@interface AWEAwemePlayVideoFullTextSentencesModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSNumber *startTime;
@property (readonly, nonatomic) NSNumber *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
