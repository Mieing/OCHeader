@class BaseRequest, NSMutableArray, BypSyncKeyBuff;

@interface BypSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *selector;
@property (retain, nonatomic) BypSyncKeyBuff *cliSyncKeyBuff;
@property (nonatomic) int scene;

+ (void)initialize;

- (void)setScene:(int)a0;
- (int)scene;
- (void)setCliSyncKeyBuff:(id)a0;
- (id)cliSyncKeyBuff;
- (void)setSelector:(id)a0;
- (id)selector;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
