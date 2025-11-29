@class NSString, CContact, NSMutableDictionary, NSMutableArray, SearchMatchTip;

@interface FTSIntelligentMsgSearchResultWrap : NSObject

@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) CContact *sessionContact;
@property (retain, nonatomic) CContact *talkerContact;
@property (retain, nonatomic) SearchMatchTip *matchTip;
@property (retain, nonatomic) NSMutableArray *arrMsgItems;
@property (retain, nonatomic) NSMutableArray *arrFaceClusterItem;
@property (retain, nonatomic) NSMutableArray *arrSessionResult;
@property (retain, nonatomic) NSMutableDictionary *dicSessionResult;
@property (nonatomic) unsigned int sessionSearchResultCount;

- (void)resetSearchResult;
- (long long)getResultCountForDisplay;
- (void).cxx_destruct;

@end
