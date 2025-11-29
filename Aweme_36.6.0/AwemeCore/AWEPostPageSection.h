@class NSString, NSArray;

@interface AWEPostPageSection : NSObject <IGListDiffable>

@property (copy, nonatomic) NSString *diffId;
@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSArray *elementsSnapshots;
@property (copy, nonatomic) NSString *headerId;
@property (nonatomic) Class headerViewClass;
@property (nonatomic) double headerHeight;
@property (copy, nonatomic) NSString *footerId;
@property (nonatomic) Class footerViewClass;
@property (nonatomic) double footerHeight;

+ (id)sectionWithElements:(id)a0 center:(id)a1;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithElements:(id)a0 center:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
