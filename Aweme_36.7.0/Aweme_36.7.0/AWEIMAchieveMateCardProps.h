@class NSString;

@interface AWEIMAchieveMateCardProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) BOOL backgroundImageIsBright;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ showBlock;

- (void).cxx_destruct;

@end
