@class FinderClientStatus, NSMutableArray;

@interface WCFinderFetchEnhanceCgiStatusParams : NSObject

@property (retain, nonatomic) NSMutableArray *readStats;
@property (retain, nonatomic) NSMutableArray *unreadItems;
@property (retain, nonatomic) FinderClientStatus *clientStatus;

- (void).cxx_destruct;

@end
