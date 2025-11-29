@class NSString, UIColor;

@interface WCPayTransferMoneyAntiCheatViewData : NSObject

@property (nonatomic) BOOL isShowNotice;
@property (retain, nonatomic) NSString *antiCheatHint;
@property (retain, nonatomic) UIColor *antiCheatHintColor;
@property (retain, nonatomic) UIColor *antiCheatHintColorDark;
@property (retain, nonatomic) NSString *lefticon;
@property (retain, nonatomic) NSString *lefticonDark;
@property (retain, nonatomic) NSString *righticon;
@property (retain, nonatomic) NSString *righticonDark;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *pagepath;

- (void).cxx_destruct;

@end
