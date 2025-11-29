@class NSString, NSMutableArray, HTSLiveCommonButton;

@interface FeatureConditionInfoResponse_Data : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSMutableArray *ruleListArray;
@property (readonly, nonatomic) unsigned long long ruleListArray_Count;
@property (retain, nonatomic) HTSLiveCommonButton *buttonInfo;
@property (nonatomic) BOOL hasButtonInfo;

+ (id)descriptor;

@end
