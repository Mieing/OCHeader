@class NSString, UIImage;

@interface AWEIMSharePoiRankMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL sendFromMe;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *avatarDefaultImage;
@property (copy, nonatomic) NSString *avatarURL;

- (void).cxx_destruct;

@end
