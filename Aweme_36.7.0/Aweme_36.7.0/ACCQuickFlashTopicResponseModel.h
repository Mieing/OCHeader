@class NSNumber, NSString, NSArray;

@interface ACCQuickFlashTopicResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL bindHashtag;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSArray *TopicList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
