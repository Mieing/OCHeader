@class NSString, NSDictionary, NSArray;

@interface AWEDLMAuthResult : NSObject <AWEDLMAuthResultProtocol>

@property (nonatomic) long long action;
@property (nonatomic) BOOL configMismatch;
@property (copy, nonatomic) NSString *certID;
@property (copy, nonatomic) NSString *positionCertID;
@property (copy, nonatomic) NSString *ruleID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSArray *lastCertIds;
@property (nonatomic) BOOL showDialogByIllegalRouteOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
