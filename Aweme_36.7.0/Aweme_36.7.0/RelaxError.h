@class NSString, NSMutableDictionary, NSDictionary;

@interface RelaxError : NSError {
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) NSString *summaryMessage;
@property (retain, nonatomic) NSString *templateUrl;
@property (retain, nonatomic) NSString *cardVersion;
@property (readonly, nonatomic) NSString *level;
@property (retain, nonatomic) NSString *callStack;
@property (readonly, nonatomic) NSMutableDictionary *customInfo;

+ (void)addStringValue:(id)a0 forKey:(id)a1 toDictionary:(id)a2;
+ (void)addDictionary:(id)a0 toDictionary:(id)a1;
+ (id)relaxErrorWithCode:(long long)a0 message:(id)a1 level:(id)a2 customInfo:(id)a3;
+ (id)relaxErrorWithCode:(long long)a0 message:(id)a1 level:(id)a2;
+ (id)relaxErrorWithCode:(long long)a0 description:(id)a1;

- (void)addCustomInfo:(id)a0 forKey:(id)a1;
- (id)generateJsonStr;
- (void)addCustomInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)userInfo;

@end
