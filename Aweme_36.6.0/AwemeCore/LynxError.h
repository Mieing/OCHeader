@class NSString, NSMutableDictionary, NSArray, NSDictionary;

@interface LynxError : NSError {
    long long _subCode;
    NSArray *_consumers;
    BOOL _isNewErrorCode;
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) BOOL isFatal;
@property (nonatomic) BOOL isLogBoxOnly;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) NSString *summaryMessage;
@property (retain, nonatomic) NSString *templateUrl;
@property (retain, nonatomic) NSString *cardVersion;
@property (readonly, nonatomic) NSString *level;
@property (readonly, nonatomic) NSString *fixSuggestion;
@property (retain, nonatomic) NSString *callStack;
@property (retain, nonatomic) NSString *rootCause;
@property (readonly, nonatomic) NSMutableDictionary *customInfo;

+ (id)lynxErrorWithCode:(long long)a0 message:(id)a1 fixSuggestion:(id)a2 level:(id)a3;
+ (id)lynxErrorWithCode:(long long)a0 message:(id)a1 fixSuggestion:(id)a2 level:(id)a3 customInfo:(id)a4 isLogBoxOnly:(BOOL)a5;
+ (id)lynxErrorWithCode:(long long)a0 description:(id)a1;
+ (id)lynxErrorWithCode:(long long)a0 message:(id)a1;
+ (id)lynxErrorWithCode:(long long)a0 message:(id)a1 fixSuggestion:(id)a2 level:(id)a3 customInfo:(id)a4;
+ (void)addStringValue:(id)a0 forKey:(id)a1 toDictionary:(id)a2;
+ (void)addDictionary:(id)a0 toDictionary:(id)a1;
+ (id)lynxErrorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)lynxErrorWithCode:(long long)a0 sourceError:(id)a1;

- (void)addCustomInfo:(id)a0 forKey:(id)a1;
- (id)generateJsonStr;
- (id)getContextInfo;
- (BOOL)isJSError;
- (BOOL)isLepusError;
- (long long)getSubCode;
- (void).cxx_destruct;
- (BOOL)isValid;
- (long long)code;
- (id)userInfo;
- (void)setCustomInfo:(id)a0;

@end
