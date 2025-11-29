@class WCFinderBaseCgi, NSString, NSDictionary, NSMutableArray;

@interface WCFinderMentionFriendContactSearchTask : NSObject

@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSMutableArray *contacts;
@property (retain, nonatomic) NSDictionary *dicMatchTips;
@property (retain, nonatomic) WCFinderBaseCgi *fetchingCGI;

+ (BOOL)_acceptMatchType:(unsigned long long)a0;
+ (void)fillMatchInfo:(id)a0 ToContact:(id)a1;

- (void)asyncFetchContact:(id /* block */)a0 failure:(id /* block */)a1;
- (void)asyncFetchContactCount:(long long)a0 successful:(id /* block */)a1 pendingResult:(id)a2 failure:(id /* block */)a3;
- (void)doFetchTask:(long long)a0 complete:(id /* block */)a1 failure:(id /* block */)a2;
- (void)_doSearchContactFinder:(id)a0 complete:(id /* block */)a1 failure:(id /* block */)a2;
- (void).cxx_destruct;

@end
