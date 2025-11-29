@class NSString, BDPGiftDetailModel, BDPGiftStyleModel;

@interface BDPGiftPostResponse : NSObject

@property (retain, nonatomic) BDPGiftDetailModel *gift;
@property (nonatomic) long long deadline;
@property (nonatomic) long long totalDeadline;
@property (nonatomic) long long recommendId;
@property (nonatomic) BOOL isFirstRecommend;
@property (nonatomic) long long availableStock;
@property (nonatomic) long long strategyId;
@property (retain, nonatomic) BDPGiftStyleModel *style;
@property (nonatomic) long long errNo;
@property (copy, nonatomic) NSString *errMsg;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
