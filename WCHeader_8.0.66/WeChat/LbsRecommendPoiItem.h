@class NSString, NSMutableArray;

@interface LbsRecommendPoiItem : MMObject

@property (retain, nonatomic) NSString *nsTitle;
@property (retain, nonatomic) NSString *nsSubTitle;
@property (retain, nonatomic) NSString *nsDesc;
@property (retain, nonatomic) NSString *nsIconUrl;
@property (retain, nonatomic) NSString *nsJumpUrl;
@property (retain, nonatomic) NSString *nsSignature;
@property (retain, nonatomic) NSMutableArray *aryADIconUrlList;

- (void).cxx_destruct;

@end
