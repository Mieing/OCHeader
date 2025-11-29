@class NSArray;

@interface VEAmazingFeatureChangeset : NSObject

@property (retain, nonatomic) NSArray *addedFeatures;
@property (retain, nonatomic) NSArray *deletedFeatures;
@property (retain, nonatomic) NSArray *updatedFeatures;
@property (nonatomic) BOOL isEmpty;

- (id)initWithSource:(id)a0 target:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
