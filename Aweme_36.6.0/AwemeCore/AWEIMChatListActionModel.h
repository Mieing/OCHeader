@class NSString, UIColor;

@interface AWEIMChatListActionModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) NSString *titleImageName;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long order;

- (void).cxx_destruct;

@end
