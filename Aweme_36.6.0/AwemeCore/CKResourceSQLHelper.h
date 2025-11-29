@interface CKResourceSQLHelper : NSObject

+ (id)deleteFromTable:(id)a0 condictionMap:(id)a1;
+ (id)queryFromTable:(id)a0 queryColumns:(id)a1 condictionMap:(id)a2;
+ (id)updateFromTable:(id)a0 columnsMap:(id)a1 condictionMap:(id)a2;
+ (id)appendConditionSQL:(id)a0;
+ (id)appendColumnSQL:(id)a0;
+ (id)appendUpdatedColumnSQL:(id)a0;

@end
