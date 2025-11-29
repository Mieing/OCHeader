@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDXBridgeShowSelectSingleGroupMemberMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *panelTitle;
@property (nonatomic) BOOL isMultiSelect;
@property (nonatomic) BOOL shouldShowAllButton;
@property (nonatomic) BOOL doNotHideMyself;
@property (copy, nonatomic) NSString *unselectReason;
@property (retain, nonatomic) NSNumber *maxSelectCount;
@property (copy, nonatomic) NSString *maximumSelectToast;
@property (nonatomic) BOOL isDisplayMyselfSuffix;
@property (retain, nonatomic) NSArray *filterUserList;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSArray *defaultSelectUserList;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
