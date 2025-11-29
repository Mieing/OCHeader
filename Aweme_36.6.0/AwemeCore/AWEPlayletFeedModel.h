@class AWEPlayletInfoModel, AWEPlayletSchemaModel, NSString, NSArray, NSNumber, NSMutableArray;

@interface AWEPlayletFeedModel : NSObject

@property (retain, nonatomic) AWEPlayletSchemaModel *schemaModel;
@property (retain, nonatomic) NSNumber *minRequestCursor;
@property (retain, nonatomic) NSNumber *maxRequestCursor;
@property (copy, nonatomic) NSString *playletID;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL loadmoreHasMore;
@property (copy, nonatomic) NSArray *recommendColorArray;
@property (retain, nonatomic) AWEPlayletInfoModel *playletInfoModel;

- (void).cxx_destruct;

@end
