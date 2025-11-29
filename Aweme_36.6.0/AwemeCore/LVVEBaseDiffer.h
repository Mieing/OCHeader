@class VEAmazingFeature;

@interface LVVEBaseDiffer : NSObject

@property (retain, nonatomic) VEAmazingFeature *added;
@property (retain, nonatomic) VEAmazingFeature *removed;
@property (retain, nonatomic) VEAmazingFeature *changed;

- (void).cxx_destruct;

@end
