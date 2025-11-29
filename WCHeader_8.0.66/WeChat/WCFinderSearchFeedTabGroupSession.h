@class NSArray, NSMutableArray, WCFinderSearchFeedTabSession;

@interface WCFinderSearchFeedTabGroupSession : NSObject {
    WCFinderSearchFeedTabSession *_activeTab;
}

@property (retain, nonatomic) NSMutableArray *mutTabs;
@property (readonly, nonatomic) NSArray *tabs;
@property (retain, nonatomic) WCFinderSearchFeedTabSession *activeTab;
@property (readonly, nonatomic) BOOL feedNotEmpty;
@property (readonly, nonatomic) BOOL displayTab;

- (void)clean;
- (id)description;
- (void).cxx_destruct;

@end
