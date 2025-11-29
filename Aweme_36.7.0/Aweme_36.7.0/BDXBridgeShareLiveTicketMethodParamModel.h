@class NSString;

@interface BDXBridgeShareLiveTicketMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL showPushPanel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *ticketGenerate;
@property (copy, nonatomic) NSString *extraParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
