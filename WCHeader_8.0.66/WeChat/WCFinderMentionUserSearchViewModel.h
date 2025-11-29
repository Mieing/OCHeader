@class NSString, NSArray, WCFinderMentionUserSection, FTSContactSearchUtilLogic, WCFinderMentionFriendContactSearchTask;

@interface WCFinderMentionUserSearchViewModel : NSObject

@property (retain, nonatomic) NSString *lastKeyword;
@property (retain, nonatomic) WCFinderMentionUserSection *followSection;
@property (retain, nonatomic) WCFinderMentionUserSection *friendSeciton;
@property (retain, nonatomic) WCFinderMentionUserSection *moreSection;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL error;
@property (retain, nonatomic) FTSContactSearchUtilLogic *contactSearchLogic;
@property (retain, nonatomic) WCFinderMentionFriendContactSearchTask *friendSeachTask;
@property (nonatomic) unsigned long long searchSequence;

- (id)init;
- (void)reset;
- (void)search:(id)a0 complete:(id /* block */)a1;
- (void)_search:(id)a0 seq:(unsigned long long)a1 withoutFriendContactComplete:(id /* block */)a2;
- (void)_search:(id)a0 seq:(unsigned long long)a1 withFriendContactComplete:(id /* block */)a2;
- (void)_searchContact:(id)a0 firstPage:(BOOL)a1 complete:(id /* block */)a2;
- (void)_doSearch:(id)a0 firstPage:(BOOL)a1 complete:(id /* block */)a2;
- (void)onRequestMore:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
