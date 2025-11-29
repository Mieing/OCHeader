@class NSArray, EcsTag;

@interface EcsTagsViewModel : NSObject

@property (readonly, nonatomic) EcsTag *tagsModel;
@property (readonly, nonatomic) NSArray *tagItemsVM;

+ (id)createWithTagsModel:(id)a0;

- (id)initWithTagsModel:(id)a0;
- (void)setTagsModel:(id)a0;
- (void).cxx_destruct;

@end
