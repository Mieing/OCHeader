@class NSString;

@interface AWEIMFileContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) BOOL isExpired;

- (void).cxx_destruct;

@end
