@class InteractionPluginCommonData, NSString, NSMutableArray;

@interface InteractionPluginDetailData : IESLivePBBaseMessage

@property (retain, nonatomic) InteractionPluginCommonData *commonData;
@property (nonatomic) BOOL hasCommonData;
@property (copy, nonatomic) NSString *detailIntro;
@property (retain, nonatomic) NSMutableArray *previewsArray;
@property (readonly, nonatomic) unsigned long long previewsArray_Count;

+ (id)descriptor;

@end
