@class NSArray, NSString;

@interface AWEDTOChapter : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *chapterDetails;
@property (nonatomic) long long chapterType;
@property (copy, nonatomic) NSString *chapterAbstract;
@property (copy, nonatomic) NSArray *chapterBarColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chapterDetailsJSONTransformer;
+ (id)chapterBarColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
