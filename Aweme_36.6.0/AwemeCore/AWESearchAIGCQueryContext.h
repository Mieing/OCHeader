@class NSString, NSArray, UIImage, NSDictionary;

@interface AWESearchAIGCQueryContext : NSObject

@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *tosid;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long imageHeight;
@property (nonatomic) long long imageWidth;
@property (copy, nonatomic) NSArray *imageUrlList;
@property (copy, nonatomic) NSString *originalSearchId;
@property (copy, nonatomic) NSString *originalQuery;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSArray *videoImageURLList;
@property (nonatomic) long long videoImageHeight;
@property (nonatomic) long long videoImageWidth;
@property (retain, nonatomic) UIImage *videoImage;
@property (retain, nonatomic) NSDictionary *appendRequestParams;
@property (copy, nonatomic) NSString *searchUniqueID;
@property (nonatomic) BOOL isShowHistoryTips;

+ (id)safeQuery:(id)a0;

- (BOOL)isPicTextSearch;
- (BOOL)isPurePicSearch;
- (BOOL)isVideoAbstract;
- (id)initWithBubbleModel:(id)a0;
- (BOOL)enableImagePreRequest;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0;

@end
