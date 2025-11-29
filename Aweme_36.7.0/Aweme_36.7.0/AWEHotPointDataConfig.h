@class AWENewHotSearchModel, NSNumber;

@interface AWEHotPointDataConfig : NSObject

@property (retain, nonatomic) AWENewHotSearchModel *hotSpotModel;
@property (nonatomic) BOOL responseHasMore;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *foldOffset;

+ (id)initialConfig;
+ (id)initialConfigWithExpandRelatedSpotModel:(id)a0;

- (id)itemIDList;
- (id)keyWord;
- (BOOL)isAD;
- (long long)isTrending;
- (void).cxx_destruct;
- (id)init;

@end
