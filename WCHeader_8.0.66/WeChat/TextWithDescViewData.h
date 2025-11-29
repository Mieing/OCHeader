@class NSString, TextViewData;

@interface TextWithDescViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *text;
@property (retain, nonatomic) TextViewData *desc;
@property (nonatomic) int position;
@property (nonatomic) int align;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
