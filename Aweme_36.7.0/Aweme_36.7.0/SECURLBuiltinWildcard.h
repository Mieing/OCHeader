@class NSString;
@protocol SECURLWildcard;

@interface SECURLBuiltinWildcard : NSObject <SECURLWildcard>

@property (retain, nonatomic) id<SECURLWildcard> customImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isWildcard:(id)a0;
- (BOOL)isVariable:(id)a0;
- (BOOL)isMatchAll:(id)a0;
- (id)variableName:(id)a0;
- (id)partsOfTarget:(id)a0;
- (void).cxx_destruct;

@end
