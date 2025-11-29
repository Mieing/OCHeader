@interface AWESearchOpenSubPageManager : NSObject

+ (id)doPreProcessWithSchemaModel:(id)a0 extraParams:(id)a1;
+ (id)subPageTypeWithSchemaModel:(id)a0;
+ (id)generateSubPageActionWithSubPageType:(id)a0;
+ (id)subPageSchemaWithSchemaModel:(id)a0;
+ (void)jumpToSubPageWithSchemaModel:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isSubPageGoodsDetailWithSchemaModel:(id)a0;

@end
