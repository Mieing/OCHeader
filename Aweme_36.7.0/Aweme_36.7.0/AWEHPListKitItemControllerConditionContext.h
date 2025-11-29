@protocol AWEHPListKitItemControllerObjectProtocol, AWEHPListKitModuleControllerProtocol;

@interface AWEHPListKitItemControllerConditionContext : NSObject

@property (retain, nonatomic) id<AWEHPListKitItemControllerObjectProtocol> itemControllerObject;
@property (retain, nonatomic) id<AWEHPListKitModuleControllerProtocol> moduleController;
@property (nonatomic) long long sectionIndex;
@property (nonatomic) long long itemIndex;

- (void).cxx_destruct;

@end
