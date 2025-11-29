@class NSNumber, NSString;

@interface BDXBridgeOpenIncentiveShareDialogMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL isPrivate;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *taskGroupId;
@property (copy, nonatomic) NSString *inviteEnterFrom;
@property (retain, nonatomic) NSNumber *directOpenRadarGroup;
@property (copy, nonatomic) NSString *pitayaCellTailString;
@property (copy, nonatomic) NSString *enterFromFirst;
@property (copy, nonatomic) NSString *enterFromSecond;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
