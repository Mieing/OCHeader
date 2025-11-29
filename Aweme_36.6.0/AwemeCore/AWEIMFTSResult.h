@class NSArray;

@interface AWEIMFTSResult : NSObject

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long lastSortOrder;
@property (copy, nonatomic) NSArray *resultDatas;

- (void).cxx_destruct;

@end
