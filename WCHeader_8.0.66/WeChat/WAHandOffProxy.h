@class NSString;

@interface WAHandOffProxy : NSObject <IWAHandOffService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trySetCurrentHandOffWithTask:(id)a0 handoffId:(id)a1;
+ (void)tryOpenCurrentHandOffWithTask:(id)a0 handoffId:(id)a1 withAppPath:(id)a2 withActioId:(long long)a3;
+ (void)removeCurrentHandOffItem;


@end
