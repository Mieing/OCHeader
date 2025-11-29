@class NSArray;

@interface AWEShareAsStoryStyleComponentModel : NSObject

@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *texts;
@property (retain, nonatomic) NSArray *contents;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)modelWithImages:(id)a0 contentModel:(id)a1 textModel:(id)a2;

- (id)initWithImages:(id)a0 contentModel:(id)a1 textModel:(id)a2;
- (void).cxx_destruct;

@end
