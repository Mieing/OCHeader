@class NSDictionary;

@interface AWEECOMIMChatListBizDataSourceManager : NSObject

@property (copy) NSDictionary *dataSourceDict;
@property (copy, nonatomic) NSDictionary *convTypeToDataSourceDictKey;

- (void)setDataSource:(id)a0 WithConvType:(long long)a1;
- (id)dataSourceWithConvType:(long long)a0;
- (id)allDataSource;
- (void).cxx_destruct;
- (id)init;

@end
