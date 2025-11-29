@class NSString, NSMutableArray;

@interface FinderPoiBasicInfoResponse_RecommendDishesComponent : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *dishesList;
@property (retain, nonatomic) NSString *poiId;
@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *poiBasicinfoToRecommenddishesdetailByPass;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setPoiBasicinfoToRecommenddishesdetailByPass:(id)a0;
- (id)poiBasicinfoToRecommenddishesdetailByPass;
- (void)setTopicId:(unsigned long long)a0;
- (unsigned long long)topicId;
- (void)setPoiId:(id)a0;
- (id)poiId;
- (void)setDishesList:(id)a0;
- (id)dishesList;
- (void)setTitle:(id)a0;
- (id)title;
- (id)archivedWCTValue;

@end
