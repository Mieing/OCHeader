@class NSMutableArray;

@interface QueryFilterEngine : NSObject

@property (retain) NSMutableArray *filterActions;
@property BOOL queryFilterEnabled;

+ (id)filterQueryStringWithL0Params:(id)a0;
+ (void)handleQueryBodyEncryptIfNeed:(id)a0 queryMap:(id)a1 withFilterResult:(id)a2;
+ (id)queryStringFromPairArray:(id)a0;
+ (int)getEncryptTypeFromQueryEncrypt:(BOOL)a0 bodyEncrypt:(BOOL)a1;
+ (id)shareInstance;

- (void)parseQueryFilterConfig:(id)a0;
- (void)parseTNCQueryFilterConfig:(id)a0;
- (id)filterQuery:(id)a0;
- (void)setLocalCommonParamsConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
