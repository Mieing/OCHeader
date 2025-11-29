@interface WAMediaCastingCommonDefinition : NSObject

+ (id)formatUpnpSearchError:(unsigned long long)a0;
+ (id)formatUpnpSearchError:(unsigned long long)a0 errnum:(int)a1;
+ (id)formatUpnpSearchError:(unsigned long long)a0 localizedDescription:(id)a1;
+ (id)formatUpnpCommandError:(unsigned long long)a0;
+ (id)formatUpnpCommandError:(unsigned long long)a0 localizedDescription:(id)a1;
+ (unsigned long long)formatUpnpVideoPlayerState:(id)a0;
+ (id)versionString;
+ (id)weakProxyWithTarget:(id)a0;

@end
