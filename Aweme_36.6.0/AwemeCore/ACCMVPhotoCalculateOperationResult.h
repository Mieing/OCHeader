@class VEAIMomentBIMResult, NSDictionary, NSString, NSError;

@interface ACCMVPhotoCalculateOperationResult : NSObject

@property (retain, nonatomic) VEAIMomentBIMResult *bimResult;
@property (nonatomic) unsigned long long orientation;
@property (retain, nonatomic) NSDictionary *imageExif;
@property (copy, nonatomic) NSString *videoModelString;
@property (copy, nonatomic) NSString *videoCreateDateString;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
