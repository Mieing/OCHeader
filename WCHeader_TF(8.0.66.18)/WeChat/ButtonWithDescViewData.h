@class NSString, TextViewData, ButtonViewData;

@interface ButtonWithDescViewData : WXPBGeneratedMessage

@property (retain, nonatomic) ButtonViewData *button;
@property (retain, nonatomic) TextViewData *desc;
@property (nonatomic) int position;
@property (nonatomic) int align;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
