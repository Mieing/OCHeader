@class NSString, NSURL;

@interface GPMaterialModel : NSObject

@property (copy, nonatomic) NSString *gameplayAlgorithm;
@property (copy, nonatomic) NSString *algorithmConfig;
@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned long long fileType;
@property (nonatomic) unsigned long long outputType;

- (void).cxx_destruct;

@end
