@class NSString, NSArray, NSDictionary;

@interface RTVUISectionModel : NSObject

@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSArray *cellModels;
@property (retain, nonatomic) NSDictionary *supplementaryModelMapper;

- (id)initWithSectionIdentifier:(id)a0 cellModels:(id)a1;
- (void)setSegmentController:(id)a0;
- (id)segmentController;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
