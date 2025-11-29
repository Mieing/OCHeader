@class NSData, NSString, NSMutableArray;

@interface WCFinderGroupMemberViewModel : NSObject

@property (nonatomic) BOOL hasFetchData;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL hadJoinedGroup;
@property (copy, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long authorCount;
@property (retain, nonatomic) NSMutableArray *items;
@property (copy, nonatomic) id /* block */ dataChangeBlock;

- (id)initWithFinderContact:(id)a0;
- (void)fetchMoreData;
- (void).cxx_destruct;

@end
