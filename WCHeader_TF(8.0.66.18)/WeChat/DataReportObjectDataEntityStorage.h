@class NSMapTable;

@interface DataReportObjectDataEntityStorage : NSObject {
    NSMapTable *m_objectDataMap;
}

- (id)init;
- (void)save:(id)a0 withEntity:(id)a1;
- (id)get:(id)a0;
- (void)clear:(id)a0;
- (void).cxx_destruct;

@end
