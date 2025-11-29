@class NSString;

@interface BDByteCastInternalHostConfig : NSObject <BDByteCastHostConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDomain;
+ (BOOL)isBoe;
+ (id)grayConfigDomain;
+ (id)boeHostsMap;
+ (id)hostsMap;
+ (id)tokenDomin;


@end
