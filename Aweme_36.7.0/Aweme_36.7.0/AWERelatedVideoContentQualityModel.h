@class AWEAwemeModel;

@interface AWERelatedVideoContentQualityModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *exitItem;
@property (nonatomic) BOOL isScroll;
@property (nonatomic) long long sameAuthorCount;
@property (nonatomic) long long unCorrelatedCountV2;
@property (nonatomic) long long unCorrelatedCountV3;

- (void).cxx_destruct;

@end
