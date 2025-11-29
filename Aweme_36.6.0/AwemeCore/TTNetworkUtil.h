@interface TTNetworkUtil : NSObject

+ (id)URLString:(id)a0 appendCommonParams:(id)a1;
+ (id)URLWithURLString:(id)a0;
+ (id)md5Hex:(id)a0;
+ (void)dispatchDelayedBlockImmediately:(id /* block */)a0;
+ (id)getNONEmptyString:(id)a0;
+ (id /* block */)dispatchBlockAfterDelay:(long long)a0 block:(id /* block */)a1;
+ (id)calculateFileMd5WithFilePath:(id)a0;
+ (long long)GetThreadCurrentPriority;
+ (unsigned int)calculateQoS:(long long)a0;
+ (int)calculateRelativePriority:(long long)a0;
+ (id)ttnetURLWithString:(id)a0;
+ (id)replaceFirstAppearString:(id)a0 target:(id)a1 toString:(id)a2;
+ (id)webviewURLString:(id)a0 appendCommonParams:(id)a1;
+ (BOOL)doesQueryContainKey:(id)a0 keyName:(id)a1 keyValue:(id)a2;
+ (id)getRealPath:(id)a0;
+ (BOOL)isMatching:(id)a0 pattern:(id)a1 source:(id)a2;
+ (unsigned long long)ceilDivideWithNumerator:(unsigned long long)a0 denominator:(unsigned long long)a1;
+ (BOOL)isMatching:(id)a0 source:(id)a1 matchingBlock:(id /* block */)a2;
+ (id)mergeOneNSArray:(id)a0 withAnother:(id)a1;
+ (void)parseAndMergeCommonParams:(id)a0 pathLevel:(id)a1;
+ (void)mergeTNCAndUserPathMatchGroup:(id)a0 pathLevel:(id)a1 result:(id)a2;
+ (void)doMerge:(id)a0 matchGroup:(id)a1 pathLevel:(id)a2 result:(id)a3;
+ (id)mapTNCMatchGroupToPath:(id)a0;
+ (void)mergeNSArrayAndResetDictValue:(id)a0 oneNSArray:(id)a1 another:(id)a2 matchGroup:(id)a3;
+ (void)convertQueryInternalWithDuplicatedKey:(id)a0 key:(id)a1 value:(id)a2;
+ (id)convertQueryToDict:(id)a0;
+ (id)URLWithURLString:(id)a0 baseURL:(id)a1;
+ (id)filterSensitiveParams:(id)a0 outputUrl:(id *)a1 onlyInHeader:(BOOL)a2 keepPlainQuery:(BOOL)a3;
+ (id)nsdateToString:(id)a0;
+ (BOOL)isPathMatching:(id)a0 pathFilterDictionary:(id)a1;
+ (BOOL)isRequestURLMatching:(id)a0 withConfig:(id)a1;
+ (id)isValidURL:(id)a0 callback:(id /* block */)a1 callbackWithResponse:(id /* block */)a2;
+ (void)parseCommonParamsConfig:(id)a0;
+ (id)getMinExcludingCommonParams:(id)a0;
+ (id)loadTTNetOCVersionFromPlist;
+ (id)addComponentVersionToRequestLog:(id)a0;
+ (id)addCompressLogToRequestLog:(id)a0 compressLog:(id)a1;
+ (unsigned long long)imageTypeDetect:(struct __CFData { } *)a0;
+ (id)imageTypeString:(unsigned long long)a0;
+ (id)getUrlStringWithoutQuery:(id)a0;
+ (void)updateBoolValueInUserDefaultsIfNeeded:(id)a0 value:(BOOL)a1;
+ (void)updateIntegerValueInUserDefaultsIfNeeded:(id)a0 value:(long long)a1;
+ (BOOL)isRedirectResponseCode:(long long)a0;
+ (id)truncate20BytesBeforeErrorIndex:(id)a0 jsonObj:(id)a1;

@end
