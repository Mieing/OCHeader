@class NSString, WCCgiBlockHelper;

@interface XMailSearchMailAddrLogic : NSObject

@property (retain, nonatomic) NSString *curSearchingInput;
@property (retain, nonatomic) NSString *nextSearchInput;
@property (nonatomic) unsigned long long lastSearchStartTime;
@property (retain, nonatomic) WCCgiBlockHelper *curSearchingCgiHelper;
@property (copy, nonatomic) id /* block */ searchResultBlock;

- (void)searchWithInput:(id)a0;
- (void)startSearchWithInput:(id)a0 startTime:(unsigned long long)a1;
- (void)onGetSearchResult:(id)a0 input:(id)a1;
- (void).cxx_destruct;

@end
