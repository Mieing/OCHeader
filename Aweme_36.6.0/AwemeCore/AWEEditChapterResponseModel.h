@class NSString, NSArray;

@interface AWEEditChapterResponseModel : AWEBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *chapterAbstract;
@property (copy, nonatomic) NSArray *chapterList;
@property (copy, nonatomic) NSArray *chapterBarColor;
@property (nonatomic) long long chapterType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chapterBarColorJSONTransformer;
+ (id)chapterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
