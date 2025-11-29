@class NSString, NSArray, IESECGoodsDetailComponentObject, IESECGoodsDetailPageBaseViewModel;

@interface IESECGoodsDetailSectionObject : NSObject <IGListDiffable>

@property (retain, nonatomic) Class viewModelClass;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (retain, nonatomic) IESECGoodsDetailPageBaseViewModel *viewModel;
@property (copy, nonatomic) NSArray *slices;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *sliceObject;

+ (id)objectWithModelClass:(Class)a0 viewModel:(id)a1;
+ (id)sectionObjectWithBFFSliceSection:(id)a0;
+ (id)sectionObjectWithNewHeaderSection:(id)a0;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithSectionIdentifier:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;

@end
