@class NSString, NSMutableArray, RemindPopupCopywriter;

@interface ActionOuterInfo : IESLivePBBaseMessage

@property (nonatomic) int actionType;
@property (nonatomic) int freezeExtendDays;
@property (nonatomic) long long checkStartTime;
@property (nonatomic) long long checkEndTime;
@property (copy, nonatomic) NSString *assessmentConditionTitle;
@property (retain, nonatomic) NSMutableArray *assessmentConditionsArray;
@property (readonly, nonatomic) unsigned long long assessmentConditionsArray_Count;
@property (retain, nonatomic) RemindPopupCopywriter *remind;
@property (nonatomic) BOOL hasRemind;
@property (nonatomic) int remindPopupType;
@property (nonatomic) long long disposalId;

+ (id)descriptor;

@end
