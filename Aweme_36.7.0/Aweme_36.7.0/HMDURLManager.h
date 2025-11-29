@interface HMDURLManager : NSObject

+ (id)URLWithProvider:(id)a0 forAppID:(id)a1;
+ (id)URLWithHostProvider:(id)a0 pathProvider:(id)a1 forAppID:(id)a2;
+ (id)URLWithProvider:(id)a0 tryIndex:(unsigned long long)a1 forAppID:(id)a2;
+ (id)hostsWithProvider:(id)a0 forAppID:(id)a1;
+ (id)URLWithHostProvider:(id)a0 pathProvider:(id)a1 tryIndex:(unsigned long long)a2 forAppID:(id)a3;
+ (id)_hostWithProvider:(id)a0 atIndex:(unsigned long long)a1 forAppID:(id)a2;
+ (id)_pathWithProvider:(id)a0 forAppID:(id)a1;
+ (id)_URLWithHost:(id)a0 path:(id)a1;

@end
