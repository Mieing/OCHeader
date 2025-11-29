@class WCFinderSearchHotWord;

@interface WCFinderFeedHotWordSplitLayoutVM : WCFinderFeedLayoutContentVM

@property (retain, nonatomic) WCFinderSearchHotWord *preHotword;
@property (retain, nonatomic) WCFinderSearchHotWord *nextHotword;
@property (nonatomic) BOOL ignoreUpdateCell;

- (id)initWithPreHotWord:(id)a0 nextHotword:(id)a1;
- (void).cxx_destruct;

@end
