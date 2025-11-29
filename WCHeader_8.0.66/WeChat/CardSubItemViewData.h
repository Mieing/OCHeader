@class NSString, TextViewData, NSMutableArray;

@interface CardSubItemViewData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *viewId;
@property (nonatomic) unsigned int itemId;
@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) NSMutableArray *subTitle;
@property (retain, nonatomic) NSMutableArray *attachIntro;

+ (void)initialize;

@end
