@class NSString;
@protocol WCFinderGetUserCgiDelegate;

@interface WCFinderGetUserCgi : WCFinderBaseCgi

@property (weak, nonatomic) id<WCFinderGetUserCgiDelegate> delegate;
@property (copy, nonatomic) NSString *username;

- (id)init;
- (void)cgiStart;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
