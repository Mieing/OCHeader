@class NSArray;

@interface IESECLivePromotionCardUIConfig : NSObject

@property (retain, nonatomic) NSArray *goodsListUIData;
@property (retain, nonatomic) NSArray *replayUIData;
@property (retain, nonatomic) NSArray *searchUIData;
@property (retain, nonatomic) NSArray *propertyUIData;

+ (id)shareUIConfig;

- (id)goodsListCardUIConfig;
- (id)p_getLayoutDataWithModelArray:(id)a0 config:(id)a1;
- (id)searchCardUIConfig;
- (id)replayCardUIConfig;
- (id)p_getUIModelWithDict:(id)a0;
- (id)getUIModelWithCardScene:(long long)a0;
- (void).cxx_destruct;

@end
