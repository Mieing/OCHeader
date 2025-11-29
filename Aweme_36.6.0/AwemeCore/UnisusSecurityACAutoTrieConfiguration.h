@class NSArray, NSString;

@interface UnisusSecurityACAutoTrieConfiguration : NSObject

@property (retain, nonatomic) NSArray *acAutoTrieSrcPaths;
@property (retain, nonatomic) NSString *securitySalt;
@property (nonatomic) BOOL isEnablePureAlphaMatch;
@property (nonatomic) BOOL isEnableFullWordMatch;
@property (nonatomic) BOOL isEnableFilterUrl;
@property (nonatomic) BOOL isEnableExemptWord;
@property (nonatomic) BOOL isEnableUseNewDeleteMethod;
@property (nonatomic) BOOL isEnableUseCompoundWord;

- (void).cxx_destruct;

@end
