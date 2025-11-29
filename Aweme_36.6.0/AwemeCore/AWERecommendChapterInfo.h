@class NSArray, NSString;

@interface AWERecommendChapterInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long recommendType;
@property (copy, nonatomic) NSArray *pushScene;
@property (nonatomic) unsigned long long generalStatus;
@property (nonatomic) unsigned long long generalSource;
@property (copy, nonatomic) NSArray *chapterList;
@property (copy, nonatomic) NSArray *colorList;
@property (copy, nonatomic) NSString *chapterAbstract;
@property (nonatomic) BOOL hasClickedRecommendBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chapterListJSONTransformer;
+ (id)colorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
