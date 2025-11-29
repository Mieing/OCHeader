@class NSString;

@interface AWEAdMatchAppInfoHelper : HTSService <AWEAdMatchAppInfoHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sendRequestWithParams:(id)a0 retry:(unsigned long long)a1 fromCache:(BOOL)a2;
+ (id)adIDFromParams:(id)a0;
+ (id)advIDFromParams:(id)a0;
+ (void)uploadMatchAppInfo:(id)a0 adInfo:(id)a1;
+ (void)uploadCachedInfo;
+ (id)phoneNumber;
+ (id)ipAddress;


@end
