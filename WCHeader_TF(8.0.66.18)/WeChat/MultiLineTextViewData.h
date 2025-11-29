@class NSString, TextViewData, NSMutableArray;

@interface MultiLineTextViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *leftText;
@property (retain, nonatomic) NSMutableArray *rightText;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
