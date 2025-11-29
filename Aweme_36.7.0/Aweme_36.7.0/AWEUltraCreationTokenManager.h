@class NSString, NSMutableDictionary, NSArray;

@interface AWEUltraCreationTokenManager : NSObject

@property (copy, nonatomic) NSString *curToken;
@property (nonatomic) long long curPage;
@property (retain, nonatomic) NSMutableDictionary *pageMap;
@property (retain, nonatomic) NSMutableDictionary *tokenMap;
@property (copy, nonatomic) NSString *curRequestId;
@property (retain, nonatomic) NSArray *pages;

- (void)configPages:(id)a0 initialToken:(id)a1;
- (long long)quitPageWithToken:(id)a0;
- (long long)nextPageWithCurrentToken:(id)a0;
- (void)setCurrentPage:(long long)a0 token:(id)a1;
- (BOOL)containsToken:(id)a0;
- (void)configPage:(long long)a0 token:(id)a1;
- (void).cxx_destruct;

@end
