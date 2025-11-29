@class NSArray, NSString, NSMutableArray;

@interface WCFinderMentionContactSearcher : NSObject

@property (retain, nonatomic) NSArray *contacts;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSMutableArray *pendingTask;

- (id)init;
- (void)search:(id)a0 index:(long long)a1 complete:(id /* block */)a2;
- (void)search:(id /* block */)a0;
- (BOOL)_doSearch:(id)a0;
- (BOOL)_testContact:(id)a0 contact:(id)a1;
- (void)_queryFriendFinderContact:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
