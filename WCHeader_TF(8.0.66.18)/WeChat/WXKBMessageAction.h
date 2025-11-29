@class NSString, WXKBMessageActionContext, WXKBMessageActionReportObject;

@interface WXKBMessageAction : NSObject

@property (readonly, nonatomic) WXKBMessageActionContext *context;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) WXKBMessageActionReportObject *reportObject;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int messageType;
@property (retain, nonatomic) WXKBMessageActionContext *context;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) WXKBMessageActionReportObject *reportObject;
@property (retain, nonatomic) NSString *sessionId;

+ (id)messageActionWithDictionary:(id)a0;

- (BOOL)precheck;
- (void)privatePerform;
- (id)getLoadingString;
- (id)getErrorString;
- (id)initWithDictionary:(id)a0;
- (void)initReportObject;
- (void)performWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
