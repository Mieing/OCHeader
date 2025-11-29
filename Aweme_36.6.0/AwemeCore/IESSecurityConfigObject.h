@class NSArray;

@interface IESSecurityConfigObject : NSObject

@property (retain, nonatomic) NSArray *schemeArr;
@property (retain, nonatomic) NSArray *hostArr;
@property (retain, nonatomic) NSArray *keywordArr;
@property (retain, nonatomic) NSArray *namespaceArr;
@property (retain, nonatomic) NSArray *moduleArr;
@property (retain, nonatomic) NSArray *bridgeNameArr;
@property (retain, nonatomic) NSArray *inParamNameArr;
@property (retain, nonatomic) NSArray *outParamNameArr;

- (BOOL)hostBlockConfig:(id)a0;
- (BOOL)keywordBlockConfig:(id)a0;
- (BOOL)willBlockURL:(id)a0;
- (id)reportParams:(id)a0 isInParam:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
