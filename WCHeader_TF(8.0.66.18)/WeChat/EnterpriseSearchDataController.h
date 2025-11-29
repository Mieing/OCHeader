@class NSString, NSMutableDictionary;
@protocol EnterpriseSearchDataControllerDelegate;

@interface EnterpriseSearchDataController : NSObject <PBMessageObserverDelegate> {
    id<EnterpriseSearchDataControllerDelegate> _delegate;
    NSMutableDictionary *_dicLocalContact;
    NSMutableDictionary *_dicLocalGroup;
    NSMutableDictionary *_dicLocalApplication;
    NSMutableDictionary *_dicRemoteContactResult;
}

@property (readonly, nonatomic) NSString *brandUserName;

- (id)initWithBrandUserName:(id)a0 delegate:(id)a1;
- (void)initData;
- (id)localSearchWithKeyword:(id)a0 range:(unsigned int)a1;
- (id)remoteSearchResultWithKeyword:(id)a0 range:(unsigned int)a1;
- (BOOL)remoteSearchMoreWithKeyword:(id)a0 range:(unsigned int)a1 error:(BOOL *)a2;
- (void)clearSearchResult;
- (BOOL)makeBizChatContactSearchReq:(id)a0 offset:(unsigned int)a1;
- (void)handleBizChatContactSearchResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
