@class NSString, NSMutableArray, NSArray;
@protocol AWEIMFTSDataSourceProtocol;

@interface AWEIMFTSDataQueue : NSObject <AWEIMFTSDataQueueProtocol>

@property BOOL hasMore;
@property (retain) NSMutableArray *resultDatas;
@property (weak, nonatomic) id<AWEIMFTSDataSourceProtocol> dataSource;
@property (nonatomic) long long flag;
@property (copy, nonatomic) NSString *keyElement;
@property (nonatomic) unsigned long long pageCount;
@property (nonatomic) long long lastSortOrder;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *messageTypes;
@property (copy, nonatomic) NSArray *aweTypes;
@property (copy, nonatomic) NSArray *extTypes;
@property (copy, nonatomic) NSArray *contentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
