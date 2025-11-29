@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWEOpenSearchMerchandiseVideoDetailParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL enableLoadMore;
@property (retain, nonatomic) NSNumber *rank;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSDictionary *loadMoreInfo;
@property (copy, nonatomic) NSArray *awemeInfoList;
@property (retain, nonatomic) NSNumber *awemeIndex;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
