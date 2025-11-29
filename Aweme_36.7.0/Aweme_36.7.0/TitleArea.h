@class NSString, CountDown, TitleArea_Button;

@interface TitleArea : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *helpIconURL;
@property (retain, nonatomic) TitleArea_Button *button;
@property (nonatomic) BOOL hasButton;
@property (retain, nonatomic) CountDown *countDown;
@property (nonatomic) BOOL hasCountDown;

+ (id)descriptor;

@end
