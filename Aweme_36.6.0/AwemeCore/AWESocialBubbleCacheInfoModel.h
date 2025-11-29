@class NSMutableArray, NSMutableDictionary;

@interface AWESocialBubbleCacheInfoModel : NSObject <NSCoding>

@property (nonatomic) long long hasShowedTotalCount;
@property (retain, nonatomic) NSMutableArray *showedDateRecords;
@property (retain, nonatomic) NSMutableDictionary *showedNumberInfo;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
