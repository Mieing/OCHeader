@interface HMDInvalidThreadsJSONParser : NSObject

- (id)parseInvalidThreadsJSONWithString:(id)a0;
- (id)stackTraceWithTokens:(id)a0 atIndex:(long long)a1;
- (id)parseInvalidThreadsJSONWithFile:(id)a0;

@end
