@class NSArray, NSString, ACCExtractPackageResultItem;

@interface ACCExtractCacheResult : NSObject

@property (copy, nonatomic) NSArray *frameIds;
@property (copy, nonatomic) NSArray *featureIds;
@property (copy, nonatomic) NSString *packageId;
@property (copy, nonatomic) NSArray *frames;
@property (copy, nonatomic) NSArray *features;
@property (retain, nonatomic) ACCExtractPackageResultItem *package;
@property (retain, nonatomic) ACCExtractPackageResultItem *cloudPackage;

- (void).cxx_destruct;

@end
