@class NSArray, NSDictionary, NSValue, NSString;
@protocol DVEBarComponentProtocol, DVEBarComponentViewModelProtocol;

@interface DVEBarComponentModel : NSObject <DVEBarComponentProtocol>

@property (nonatomic) long long componentType;
@property (retain, nonatomic) id<DVEBarComponentViewModelProtocol> viewModel;
@property (weak, nonatomic) id<DVEBarComponentProtocol> parent;
@property (nonatomic) long long componentGroup;
@property (retain, nonatomic) NSArray *subComponents;
@property (nonatomic) long long currentSubGroup;
@property (retain, nonatomic) id<DVEBarComponentProtocol> backComponentForAdd;
@property (retain, nonatomic) id<DVEBarComponentProtocol> backComponentForEdit;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL disableVisible;
@property (retain, nonatomic) NSValue *targetActionContext;
@property (copy, nonatomic) NSString *statusActionName;
@property (copy, nonatomic) NSString *clickActionName;
@property (copy, nonatomic) NSString *uiConfigActionName;
@property (copy, nonatomic) NSString *accessibilityConfigActionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
