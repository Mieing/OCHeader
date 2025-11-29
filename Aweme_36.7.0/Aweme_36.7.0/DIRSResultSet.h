@class NSString, NSMutableDictionary, DIRSFMDatabase, DIRSStatement;

@interface DIRSResultSet : NSObject {
    DIRSFMDatabase *_parentDB;
    NSMutableDictionary *_columnNameToIndexMap;
}

@property (retain) NSString *query;
@property (readonly) NSMutableDictionary *columnNameToIndexMap;
@property (retain) DIRSStatement *statement;

+ (id)resultSetWithStatement:(id)a0 usingParentDatabase:(id)a1;

- (void)close;
- (id)stringForColumnIndex:(int)a0;
- (void).cxx_destruct;
- (id)dataForColumnIndex:(int)a0;
- (id)objectAtIndexedSubscript:(int)a0;
- (int)columnCount;
- (double)doubleForColumnIndex:(int)a0;
- (int)intForColumnIndex:(int)a0;
- (BOOL)next;
- (id)objectForKeyedSubscript:(id)a0;
- (void)dealloc;
- (id)dateForColumnIndex:(int)a0;
- (id)objectForColumnIndex:(int)a0;
- (void)kvcMagic:(id)a0;
- (id)resultDict;
- (id)resultDictionary;
- (BOOL)nextWithError:(id *)a0;
- (BOOL)hasAnotherRow;
- (int)columnIndexForName:(id)a0;
- (int)intForColumn:(id)a0;
- (long long)longForColumn:(id)a0;
- (long long)longForColumnIndex:(int)a0;
- (long long)longLongIntForColumn:(id)a0;
- (long long)longLongIntForColumnIndex:(int)a0;
- (unsigned long long)unsignedLongLongIntForColumn:(id)a0;
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)a0;
- (BOOL)boolForColumn:(id)a0;
- (BOOL)boolForColumnIndex:(int)a0;
- (double)doubleForColumn:(id)a0;
- (id)stringForColumn:(id)a0;
- (id)dateForColumn:(id)a0;
- (id)dataForColumn:(id)a0;
- (id)dataNoCopyForColumn:(id)a0;
- (id)dataNoCopyForColumnIndex:(int)a0;
- (BOOL)columnIndexIsNull:(int)a0;
- (BOOL)columnIsNull:(id)a0;
- (const char *)UTF8StringForColumnIndex:(int)a0;
- (const char *)UTF8StringForColumnName:(id)a0;
- (id)objectForColumnName:(id)a0;
- (id)columnNameForIndex:(int)a0;
- (void)setParentDB:(id)a0;

@end
