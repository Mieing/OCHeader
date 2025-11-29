@class NSString, NSURL, NSDictionary;

@interface BDDispatcherBase : NSObject

@property (copy, nonatomic) NSURL *commandURL;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *next;
@property (copy, nonatomic) NSString *delayTime;
@property (copy, nonatomic) NSString *backup;
@property (retain, nonatomic) BDDispatcherBase *backupDispatcher;
@property (nonatomic) double startTimeStamp;
@property (retain, nonatomic) NSDictionary *queryDict;
@property (retain, nonatomic) NSDictionary *paramDict;
@property (readonly, copy, nonatomic) NSString *oauthType;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) id sourceApplication;
@property (weak, nonatomic) id sourceWebView;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSString *jsCallback;
@property (copy, nonatomic) id /* block */ nativeCallback;

+ (id)dispatcherWithString:(id)a0 diContext:(id)a1;
+ (id)reponseWithStatus:(long long)a0 data:(id)a1;
+ (id)codeInfoWithStatus:(long long)a0;
+ (id)messageInfoWithStatus:(long long)a0;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)parseSeniorScheme:(id)a0 diContext:(id)a1;
- (BOOL)parseCommandURL:(id)a0 diContext:(id)a1;
- (id)initWithURL:(id)a0 diContext:(id)a1;
- (id)parseQuery:(id)a0;
- (id)trimParaWithURLString:(id)a0 paraName:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)parsePath:(id)a0;

@end
