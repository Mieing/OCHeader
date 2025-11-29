@class NSString, NSNumber;

@interface BDXBridgeImOpenSelectGroupPanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSNumber *filterPrivate;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *createGroupTitle;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
