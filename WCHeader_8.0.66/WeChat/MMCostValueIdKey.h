@class NSString;

@interface MMCostValueIdKey : NSObject

@property (nonatomic) unsigned long long m_uID;
@property (nonatomic) unsigned long long m_uTotalCostValueKey;
@property (nonatomic) unsigned long long m_uTotalCountKey;
@property (retain, nonatomic) NSString *m_nsDes;

+ (id)constructOneItemWithId:(unsigned long long)a0 withTotalCostValueKey:(unsigned long long)a1 withTotalCountKey:(unsigned long long)a2 withDes:(id)a3;

- (id)init;
- (void).cxx_destruct;

@end
