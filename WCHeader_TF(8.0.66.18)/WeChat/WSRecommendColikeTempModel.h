@class NSMutableArray;

@interface WSRecommendColikeTempModel : NSObject

@property (retain, nonatomic) NSMutableArray *colikeList;
@property (nonatomic) int type;
@property (nonatomic) unsigned int totalCount;
@property (nonatomic) unsigned int updateFlag;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL continueFlag;

- (void).cxx_destruct;

@end
