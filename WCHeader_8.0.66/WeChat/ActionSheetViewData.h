@class NSMutableArray, TextViewData;

@interface ActionSheetViewData : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *item;
@property (retain, nonatomic) TextViewData *cancelText;
@property (nonatomic) unsigned int destructiveIndex;
@property (retain, nonatomic) TextViewData *actionSheetTitle;

+ (void)initialize;

@end
