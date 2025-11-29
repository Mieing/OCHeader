@interface TSEmptyItem : TSTrackedItem <TSFinalTrackedItem>

@property (nonatomic) double timestamp;
@property (nonatomic) double duration;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
