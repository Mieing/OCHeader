@class NSArray, NSString, AWEInteractModularizationTextModel;

@interface AWEVisitorNotificationModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *fromUsers;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEInteractModularizationTextModel *messageHint;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (nonatomic) long long mergeCount;

+ (id)fromUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
