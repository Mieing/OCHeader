@class NSString, NSMutableDictionary;

@interface AWEUndertakeFilterPlayAwemeCountCondition : AWEUndertakeFilterBaseCondition <AWEUGUndertakeMessage>

@property (nonatomic) long long playCountLimit;
@property (retain, nonatomic) NSMutableDictionary *playedIndexDict;
@property (nonatomic) long long currentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)conditionOnPlayAweme:(id)a0 ofIndex:(long long)a1;
- (long long)statusWithData:(id)a0 extraInfo:(id)a1;
- (unsigned long long)calcPlayCountLimitInRange:(id)a0;
- (id)initWithCountRange:(id)a0;
- (void).cxx_destruct;
- (id)initWithCountLimit:(long long)a0;
- (id)init;
- (void)dealloc;

@end
