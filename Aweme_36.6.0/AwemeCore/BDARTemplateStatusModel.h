@interface BDARTemplateStatusModel : NSObject

@property (nonatomic) long long enterFrom;
@property (nonatomic) long long cacheFrom;
@property (nonatomic) BOOL geckoReady;

- (id)initWithTemplateFrom:(id)a0 sourceType:(long long)a1;
- (void)setTemplateFrom:(id)a0;
- (void)setGeckoReadyStatus:(long long)a0;

@end
