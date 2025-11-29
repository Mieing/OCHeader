@interface MMFlutterUpdateMgr : NSObject

+ (id)getBaseID;
+ (id)getConfigID:(id)a0;
+ (id)getUpdateRevision:(id)a0;
+ (BOOL)verifyFlutterUpdate:(id)a0;
+ (id)loadFlutterUpdate:(id)a0 baseId:(id)a1;

@end
