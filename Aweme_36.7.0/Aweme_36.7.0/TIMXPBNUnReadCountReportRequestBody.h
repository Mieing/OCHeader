@class GPBInt32Int64Dictionary, NSMutableArray, GPBStringInt64Dictionary;

@interface TIMXPBNUnReadCountReportRequestBody : GPBMessage

@property (nonatomic) long long totalUnreadCount;
@property (nonatomic) BOOL hasTotalUnreadCount;
@property (retain, nonatomic) NSMutableArray *convUnreadCountArray;
@property (readonly, nonatomic) unsigned long long convUnreadCountArray_Count;
@property (nonatomic) BOOL needCheck;
@property (nonatomic) BOOL hasNeedCheck;
@property (nonatomic) long long totalDisplayUnreadCount;
@property (nonatomic) BOOL hasTotalDisplayUnreadCount;
@property (retain, nonatomic) GPBInt32Int64Dictionary *totalUnreadCountMap;
@property (readonly, nonatomic) unsigned long long totalUnreadCountMap_Count;
@property (retain, nonatomic) GPBStringInt64Dictionary *groupSymbolUnreadCount;
@property (readonly, nonatomic) unsigned long long groupSymbolUnreadCount_Count;

+ (id)descriptor;

- (void)setNeedCheck:(BOOL)a0;
- (void)setTotalUnreadCount:(long long)a0;
- (void)setConvUnreadCountArray:(id)a0;

@end
