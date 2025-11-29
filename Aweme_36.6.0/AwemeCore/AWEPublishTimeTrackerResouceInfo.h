@class NSArray, NSDictionary;

@interface AWEPublishTimeTrackerResouceInfo : NSObject

@property (nonatomic) long long imageCount;
@property (nonatomic) long long videoCount;
@property (nonatomic) double totalCount;
@property (nonatomic) double imageTotalFileSize;
@property (nonatomic) double videoTotalFileSize;
@property (retain, nonatomic) NSArray *imageFileSizeList;
@property (retain, nonatomic) NSArray *videoFileSizeList;
@property (nonatomic) double totalFileSize;
@property (retain, nonatomic) NSDictionary *imagesTypeCountDic;

- (id)trackDictionary;
- (void).cxx_destruct;

@end
