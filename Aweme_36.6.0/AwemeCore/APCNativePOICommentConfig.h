@class NSString, NSArray;

@interface APCNativePOICommentConfig : NSObject

@property (nonatomic) long long tabID;
@property (nonatomic) long long poiRatingGrade;
@property (copy, nonatomic) NSString *poiRatingID;
@property (copy, nonatomic) NSArray *assets;

- (void).cxx_destruct;

@end
