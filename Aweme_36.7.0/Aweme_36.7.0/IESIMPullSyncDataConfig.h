@class NSArray, NSString;

@interface IESIMPullSyncDataConfig : NSObject

@property (nonatomic) unsigned long long bizIDType;
@property (copy, nonatomic) NSArray *needFetchBizIDs;
@property (copy, nonatomic) NSString *source;

- (id)initWithBizIDType:(unsigned long long)a0 needFetchBizIDs:(id)a1 source:(id)a2;
- (void).cxx_destruct;

@end
