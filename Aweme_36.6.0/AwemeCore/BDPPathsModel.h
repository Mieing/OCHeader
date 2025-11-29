@class NSString, NSArray;

@interface BDPPathsModel : NSObject

@property (copy, nonatomic) NSString *duration;
@property (retain, nonatomic) NSArray *steps;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
