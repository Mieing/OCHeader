@class NSString, PHFetchResult, NSArray, NSDate;

@interface AWEAlbumModel : NSObject

@property (copy, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) PHFetchResult *result;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long count;
@property (nonatomic) BOOL isCameraRoll;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (retain, nonatomic) NSArray *models;

- (void).cxx_destruct;

@end
