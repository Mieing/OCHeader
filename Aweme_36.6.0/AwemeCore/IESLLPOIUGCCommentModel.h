@class NSString, NSArray, NSDictionary;

@interface IESLLPOIUGCCommentModel : NSObject

@property (nonatomic) long long order;
@property (copy, nonatomic) NSString *rateID;
@property (copy, nonatomic) NSArray *materials;
@property (copy, nonatomic) NSString *rateViewRawData;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)handleCommentList:(id)a0 selectedRateID:(id)a1 selectedIndex:(long long)a2 thumbnailImage:(id)a3;

- (void).cxx_destruct;

@end
