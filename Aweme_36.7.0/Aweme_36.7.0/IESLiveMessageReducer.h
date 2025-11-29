@class NSString;

@interface IESLiveMessageReducer : NSObject

@property (retain, nonatomic) NSString *pbJsonString;
@property (retain, nonatomic) NSString *method;

+ (id)reduceURL:(id)a0;
+ (BOOL)shouldSkipRequestHostReplace:(id)a0;
+ (id)reduceJsonStringWithMessage:(id)a0;

- (id)reducerWithMessage:(id)a0;
- (BOOL)replaceKeysInDictionary:(id)a0;
- (id)replaceKeysInString:(id)a0;
- (void).cxx_destruct;

@end
