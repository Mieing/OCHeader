@class NSString, DescItem;

@interface InputMobileItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *descTitle;
@property (retain, nonatomic) NSString *inputMobileDesc;
@property (retain, nonatomic) DescItem *exceptionDesc;
@property (retain, nonatomic) DescItem *newcardLinkDesc;
@property (retain, nonatomic) NSString *leftButtonDesc;
@property (retain, nonatomic) NSString *rightButtonDesc;

+ (void)initialize;

@end
