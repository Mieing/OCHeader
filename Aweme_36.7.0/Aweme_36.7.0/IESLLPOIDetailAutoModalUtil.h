@class NSString;

@interface IESLLPOIDetailAutoModalUtil : NSObject

@property (nonatomic) double clickTime;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

+ (void)showIronManModalViewWithUrl:(id)a0 routerParams:(id)a1 constData:(id)a2;
+ (void)showGrouponModalViewWithUrl:(id)a0 cityCode:(id)a1 sameCity:(id)a2 constData:(id)a3;
+ (void)mergePublishParams:(id)a0 toDict:(id)a1;
+ (id)configParamsWithUrl:(id)a0 sameCity:(id)a1 constData:(id)a2;
+ (id)sharedInstance;

- (void)goodsDetailStartBuild;
- (void)poiClickBuild:(id)a0 enterMethod:(id)a1;
- (BOOL)openGoodsStraightAway;
- (void).cxx_destruct;

@end
