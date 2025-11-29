@interface BDHMContainerTraceLog : NSObject

+ (id)generateIDForContainer;
+ (void)invalidateID:(id)a0 andData:(BOOL)a1;
+ (void)deleteData:(id)a0 isForce:(BOOL)a1;
+ (void)attach:(id)a0 webView:(id)a1;
+ (void)attach:(id)a0 LynxView:(id)a1;
+ (void)detach:(id)a0 webView:(id)a1;
+ (void)detach:(id)a0 LynxView:(id)a1;
+ (void)collectBoolean:(id)a0 field:(id)a1 data:(BOOL)a2;
+ (void)collectString:(id)a0 field:(id)a1 data:(id)a2;
+ (void)collectLong:(id)a0 field:(id)a1 data:(long long)a2;
+ (void)collectInt:(id)a0 field:(id)a1 data:(int)a2;
+ (void)fetchContainerData:(id)a0 block:(id /* block */)a1;
+ (void)initContainerDataWithID:(id)a0;
+ (void)collectData:(id)a0 uuid:(id)a1 field:(id)a2;
+ (id)viewForContainerID:(id)a0;
+ (void)addContext:(id)a0 containerId:(id)a1;
+ (void)reportContainerError:(id)a0 withID:(id)a1 withError:(id)a2 usedX:(BOOL)a3;
+ (void)syncCollectionToTraceEvent:(id)a0 timestamp:(long long)a1;
+ (void)clearData;

@end
