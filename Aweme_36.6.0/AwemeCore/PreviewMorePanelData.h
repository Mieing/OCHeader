@class NSMutableArray;

@interface PreviewMorePanelData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *widgetListArray;
@property (readonly, nonatomic) unsigned long long widgetListArray_Count;

+ (id)descriptor;

@end
