@class AWELuckyCatTaskDoneResponsePopupInfo, AWELuckyCatTaskDoneResponseToastInfo, AWELuckyCatTaskDoneResponseTaskInfo;

@interface AWELuckyCatTaskDoneResponseDataModel : AWEBaseApiModel

@property (nonatomic) unsigned long long dataType;
@property (retain, nonatomic) AWELuckyCatTaskDoneResponsePopupInfo *popUpInfo;
@property (retain, nonatomic) AWELuckyCatTaskDoneResponseToastInfo *toastInfo;
@property (retain, nonatomic) AWELuckyCatTaskDoneResponseTaskInfo *taskInfo;

+ (id)toastInfoJSONTransformer;
+ (id)popUpInfoJSONTransformer;
+ (id)taskInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
