@class NSString;

@interface AWEPOIResourceUtils : NSObject <AWEPOIResourceUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)smallPOIIconWithType:(long long)a0;
+ (id)commentListEntryIconNameForPOIType:(long long)a0;
+ (id)chatPOIIcon;
+ (id)bigPOIIconWithType:(long long)a0;
+ (id)mapAnnotationIconWithType:(long long)a0;


@end
