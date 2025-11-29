@class NSDictionary;

@interface VEAmazingSubFeatureChangeset : NSObject

@property (retain, nonatomic) NSDictionary *addedSubFeatures;
@property (retain, nonatomic) NSDictionary *deletedSubFeatures;
@property (retain, nonatomic) NSDictionary *updatedSubFeatures;
@property (nonatomic) BOOL isEmpty;

- (id)initWithSource:(id)a0 target:(id)a1;
- (void).cxx_destruct;

@end
