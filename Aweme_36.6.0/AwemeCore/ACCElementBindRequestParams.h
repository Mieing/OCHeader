@class NSMutableDictionary;

@interface ACCElementBindRequestParams : NSObject {
    NSMutableDictionary *m_sources;
}

@property (readonly, nonatomic) long long from;

- (id)initWithFrom:(long long)a0;
- (void)addSourceID:(id)a0 forSourceType:(long long)a1;
- (id)fromDesc;
- (void).cxx_destruct;
- (id)dataSources;
- (void)addDataSource:(id)a0;

@end
