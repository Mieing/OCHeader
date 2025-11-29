@interface MiniTaskReporter : NSObject

+ (void)report21920WithPageActionInfo:(id)a0;
+ (void)report21922WithItemActionInfo:(id)a0;
+ (void)report21935WihtItemAddInfo:(id)a0;
+ (void)report21947WithItemPageBrowseInfo:(id)a0;
+ (void)report27804WithActionInfo:(id)a0;
+ (unsigned long long)bizNameToItemType:(id)a0;
+ (unsigned long long)generateTypeToAddType:(unsigned long long)a0;
+ (long long)generateTypeToReportScene:(unsigned long long)a0;
+ (unsigned long long)transPageUserAction2EduExitType:(unsigned long long)a0;
+ (void)report22591ForAppendTaskEduDurantion:(unsigned long long)a0 exitType:(unsigned long long)a1;
+ (void)report22591ForGestureEduLabelDurantion:(unsigned long long)a0 exitType:(unsigned long long)a1;
+ (void)report22591ForTaskListEduWithAbortType:(unsigned long long)a0;

@end
