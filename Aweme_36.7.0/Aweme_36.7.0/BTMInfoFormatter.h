@interface BTMInfoFormatter : NSObject

+ (id)getABCDFromToken:(id)a0;
+ (id)removeIndexAndLk:(id)a0;
+ (BOOL)isBtmInfoPageId:(id)a0;
+ (id)pageIdFromBtmInfo:(id)a0;
+ (id)updateBtmInfo:(id)a0 topPage:(id)a1 withPageId:(id)a2;
+ (id)removeDPart:(id)a0;
+ (id)formatPageIdentifierOrigin:(id)a0;
+ (id)formatBtmInfo:(id)a0;
+ (id)updateBtmInfo:(id)a0 topPage:(id)a1 withPageId:(id)a2 isEnterNewPage:(BOOL)a3;
+ (id)pageABFromBtmInfo:(id)a0;
+ (id)removeIndex:(id)a0;

@end
