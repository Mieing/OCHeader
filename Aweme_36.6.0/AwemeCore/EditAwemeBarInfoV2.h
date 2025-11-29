@class NSString;

@interface EditAwemeBarInfoV2 : GPBMessage

@property (nonatomic) int buttonStatus;
@property (nonatomic) BOOL hasButtonStatus;
@property (copy, nonatomic) NSString *buttonToast;
@property (nonatomic) BOOL hasButtonToast;
@property (copy, nonatomic) NSString *barToast;
@property (nonatomic) BOOL hasBarToast;
@property (nonatomic) int editStatus;
@property (nonatomic) BOOL hasEditStatus;
@property (nonatomic) long long modifyAllEditSuccessTime;
@property (nonatomic) BOOL hasModifyAllEditSuccessTime;
@property (nonatomic) BOOL hasModifiedAll_p;
@property (nonatomic) BOOL hasHasModifiedAll_p;

+ (id)descriptor;

@end
