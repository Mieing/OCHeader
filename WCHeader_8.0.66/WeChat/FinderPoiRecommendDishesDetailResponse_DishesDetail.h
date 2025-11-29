@class NSString;

@interface FinderPoiRecommendDishesDetailResponse_DishesDetail : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *recommendWording;
@property (nonatomic) unsigned int thumbUpCnt;

+ (void)initialize;

- (void)setThumbUpCnt:(unsigned int)a0;
- (unsigned int)thumbUpCnt;
- (void)setRecommendWording:(id)a0;
- (id)recommendWording;
- (void)setPrice:(id)a0;
- (id)price;
- (void)setName:(id)a0;
- (id)name;
- (void)setImgUrl:(id)a0;
- (id)imgUrl;

@end
