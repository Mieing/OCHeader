@class NSMutableArray;

@interface EnterpriseRemoteSearchResult : NSObject

@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) NSMutableArray *items;

- (void).cxx_destruct;

@end
