@class NSString, WXKBMessageActionReportObject;

@interface WXKBSnsAction : NSObject

@property (readonly, copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) WXKBMessageActionReportObject *reportObject;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int messageType;
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
- (void)performWithContext:(id /* block */)a0;
- (void).cxx_destruct;

@end
