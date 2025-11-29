@interface TMNetworkMatchUtil : NSObject

+ (BOOL)didFindParams:(id)a0 inString:(id)a1;
+ (BOOL)didMatchParams:(id)a0 inString:(id)a1;
+ (BOOL)isMatchedPath:(id)a0 host:(id)a1 targetPath:(id)a2 targetHosts:(id)a3 matchType:(long long)a4;
+ (BOOL)isMatchedWithOriginalPath:(id)a0 targetPath:(id)a1;
+ (BOOL)isMatchedWithOriginalHost:(id)a0 targetHosts:(id)a1;
+ (BOOL)isRegexMatchedWithOriginalPath:(id)a0 targetRegexPath:(id)a1;
+ (BOOL)isRegexMatchedWithOriginalHost:(id)a0 targetRegexHosts:(id)a1;

@end
