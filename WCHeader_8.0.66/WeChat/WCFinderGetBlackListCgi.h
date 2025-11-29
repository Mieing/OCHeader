@class NSString, NSData;
@protocol WCFinderGetBlackListCgiDelegate;

@interface WCFinderGetBlackListCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (weak, nonatomic) id<WCFinderGetBlackListCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
