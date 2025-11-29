@class QDBStatement, NSString, NSMutableDictionary, QDBDatabase;

@interface QDBResultSet : NSObject {
    QDBDatabase *_parentDB;
    NSMutableDictionary *_columnNameToIndexMap;
}

@property (retain) NSString *query;
@property (readonly) NSMutableDictionary *columnNameToIndexMap;
@property (retain) QDBStatement *statement;

+ (id)resultSetWithStatement:(id)a0 usingParentDatabase:(id)a1;

- (void)dealloc;
- (void)close;
- (void)setParentDB:(id)a0;
- (int)columnCount;
- (BOOL)next;
- (BOOL)nextWithError:(id *)a0;
- (int)columnIndexForName:(id)a0;
- (int)intForColumn:(id)a0;
- (int)intForColumnIndex:(int)a0;
- (id)stringForColumn:(id)a0;
- (id)stringForColumnIndex:(int)a0;
- (id)dataForColumn:(id)a0;
- (id)dataForColumnIndex:(int)a0;
- (void).cxx_destruct;

@end
