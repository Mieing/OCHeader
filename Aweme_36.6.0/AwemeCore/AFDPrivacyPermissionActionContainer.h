@class NSString, NSMutableArray, AFDPrivacyPermissionAction;

@interface AFDPrivacyPermissionActionContainer : NSObject

@property (copy, nonatomic) NSString *createId;
@property (retain, nonatomic) NSMutableArray *actions;
@property (copy, nonatomic) NSString *routesAndValues;
@property (retain, nonatomic) AFDPrivacyPermissionAction *recordPermissionAction;
@property (retain, nonatomic) AFDPrivacyPermissionAction *recordStoryPermissionAction;
@property (retain, nonatomic) AFDPrivacyPermissionAction *recordPublishPermissionAction;

- (void).cxx_destruct;

@end
