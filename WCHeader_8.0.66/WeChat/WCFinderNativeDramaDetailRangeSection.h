@class NSArray, WCFinderNativeDramaDetailRangeSectionModel, NSString;

@interface WCFinderNativeDramaDetailRangeSection : NSObject <WCFinderCollectionViewCompositionalSection>

@property (retain, nonatomic) WCFinderNativeDramaDetailRangeSectionModel *model;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;
- (void)updateWithModel:(id)a0;
- (void)_setupItems;
- (id)layoutWithEnvironment:(id)a0;
- (void).cxx_destruct;

@end
