@class NSNumber;

@interface AWEMultiAccountNoticeCountsModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSNumber *imCount;
@property (retain, nonatomic) NSNumber *noticeCount;
@property (nonatomic) BOOL isFresh;
@property (retain, nonatomic) NSNumber *lastMsgTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (long long)totalCount;

@end
