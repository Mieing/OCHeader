@class NSData, WCFinderMention, NSMutableSet, WCFinderListLoadingStateModel, NSMutableArray, WCFinderContact;
@protocol WCFinderAggregatedMentionHalfVMDelegate;

@interface WCFinderAggregatedMentionHalfVM : NSObject

@property (retain, nonatomic) NSMutableArray *mentionList;
@property (retain, nonatomic) NSMutableSet *mentionIDSet;
@property (retain, nonatomic) WCFinderMention *mention;
@property (retain, nonatomic) WCFinderListLoadingStateModel *loadingState;
@property (retain, nonatomic) WCFinderContact *finderContact;
@property (copy, nonatomic) NSData *pageBuffer;
@property (weak, nonatomic) id<WCFinderAggregatedMentionHalfVMDelegate> delegate;

- (id)initWithFinderMention:(id)a0 finderContact:(id)a1;
- (void)fetchFirstPageData;
- (void)fetchMoreData;
- (void)fetchData;
- (void)clearData;
- (void)appendMentionList:(id)a0;
- (id)mentionAtIndex:(unsigned long long)a0;
- (BOOL)dataEmpty;
- (id)navigationTitle;
- (id)dataSnapshot;
- (long long)getRequestScene;
- (unsigned long long)getMentionListScene;
- (void).cxx_destruct;

@end
