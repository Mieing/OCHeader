@class NSString;

@interface VEMVAlgorithmResult : NSObject

@property (copy, nonatomic) NSString *photoPath;
@property (copy, nonatomic) NSString *algorithmName;
@property (copy, nonatomic) NSString *imagePath;
@property (nonatomic) unsigned long long algorithmResultType;

- (void).cxx_destruct;

@end
