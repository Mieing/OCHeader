@interface BDWiFiPrivacyCertEntry : BDPrivacyCertEntry

+ (struct __CFDictionary { } *)CNCopyCurrentNetworkInfoWithCFStringRefParam:(struct __CFString { } *)a0 privacyCert:(id)a1 error:(id *)a2;
+ (void)fetchCurrentWithCompletionHandler:(id /* block */)a0 privacyCert:(id)a1;

@end
