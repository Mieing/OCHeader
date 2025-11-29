@class NSString, NSMutableArray;

@interface RemindPopupCopywriter : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *description_p;
@property (retain, nonatomic) NSMutableArray *assessmentConditionsArray;
@property (readonly, nonatomic) unsigned long long assessmentConditionsArray_Count;

+ (id)descriptor;

@end
