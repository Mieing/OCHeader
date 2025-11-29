@class NSString, NSNumber;

@interface AWEScreenCastContentBaseService : NSObject <AWEScreenCastContentServiceProtocol>

@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL requesting;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sha256hmac:(id)a0 content:(id)a1;
- (void)configWithParams:(id)a0;
- (void)updateParams;
- (void)requestWithParams:(id)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (id)authenticateWithAk:(id)a0 sk:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
