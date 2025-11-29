@class NSDictionary;

@interface DitoMultiTabDataModel : NSObject

@property (copy, nonatomic) id stripDatas;
@property (copy, nonatomic) NSDictionary *pageData;

- (id)fetchBizQuery;
- (id)fetchTemplate;
- (id)fetchPageKey;
- (id)fetchPageID;
- (void).cxx_destruct;

@end
