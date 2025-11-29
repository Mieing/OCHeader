@class NSMutableDictionary;

@interface DataReportPageDataEntityStorage : NSObject {
    NSMutableDictionary *m_pageDataMap;
}

- (id)init;
- (void)save:(id)a0 withEntity:(id)a1;
- (id)get:(id)a0;
- (void)clear:(id)a0;
- (void)clear:(unsigned long long)a0 pageName:(id)a1;
- (id)getAll;
- (void).cxx_destruct;

@end
