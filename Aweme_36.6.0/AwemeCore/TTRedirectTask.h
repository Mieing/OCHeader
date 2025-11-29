@class NSMutableDictionary, NSDictionary, NSURL, NSArray, TTHttpTask, NSMutableArray;

@interface TTRedirectTask : NSObject

@property (weak, nonatomic) TTHttpTask *task;
@property (copy) NSMutableDictionary *allHTTPHeaders;
@property (copy) NSMutableArray *removedHeaders;
@property (copy) NSMutableDictionary *modifiedHeaders;
@property (readonly, copy, nonatomic) NSURL *originalUrl;
@property (copy) NSURL *redirectUrl;
@property (readonly, copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (readonly, copy, nonatomic) NSArray *currentRemovedHeaders;
@property (readonly, copy, nonatomic) NSDictionary *currentModifiedHeaders;

- (id)initWithHttpTask:(id)a0 httpHeaders:(id)a1 originalUrl:(id)a2 redirectUrl:(id)a3;
- (void)convertHeaderStringToDictionary:(id)a0;
- (void)removeHeader:(id)a0;
- (void)setValue:(id)a0 forHeader:(id)a1;
- (void).cxx_destruct;
- (void)cancel;

@end
