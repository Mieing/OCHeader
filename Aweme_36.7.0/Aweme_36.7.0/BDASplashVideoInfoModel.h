@class NSString, NSArray, NSNumber;

@interface BDASplashVideoInfoModel : NSObject

@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoGroupId;
@property (copy, nonatomic) NSArray *videoURLArray;
@property (copy, nonatomic) NSArray *videoPlayTrackURLArray;
@property (copy, nonatomic) NSArray *videoPlayOverTrackURLArray;
@property (copy, nonatomic) NSString *videoDensity;
@property (copy, nonatomic) NSString *videoSecretKey;
@property (copy, nonatomic) NSNumber *isH265;

- (id)videoFilePath;
- (BOOL)isValidModel;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
