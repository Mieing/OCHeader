@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderPoiRecommendDishesDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *poiId;
@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *poiBasicinfoToRecommenddishesdetailByPass;

+ (void)initialize;

@end
