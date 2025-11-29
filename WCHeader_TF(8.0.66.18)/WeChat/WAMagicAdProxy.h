@class NSString;

@interface WAMagicAdProxy : NSObject <IWAMagicAdProxyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSpecificSlotIdMsg:(id)a0;
+ (BOOL)clearSpecificSlotIdMsg:(id)a0;


@end
