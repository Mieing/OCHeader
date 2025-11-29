@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveUpperRightWidgetDataMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *upperRightWidgetDataListArray;
@property (readonly, nonatomic) unsigned long long upperRightWidgetDataListArray_Count;
@property (nonatomic) long long randomTime;

+ (id)descriptor;

@end
