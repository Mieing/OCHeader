@class UIColor, NSString, NSArray, NSURL, UIImage;

@interface AWEIMLiveGroupAnnouncementMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSURL *livingAvatarURL;
@property (copy, nonatomic) NSString *contentLabelStr;
@property (copy, nonatomic) NSString *timeLabelStr;
@property (copy, nonatomic) NSString *subscribedNumberLabelStr;
@property (copy, nonatomic) NSString *expiredStatusStr;
@property (retain, nonatomic) NSArray *avatars;
@property (retain, nonatomic) NSString *subscribeBtnStr;
@property (retain, nonatomic) UIImage *subscribeBtnImage;
@property (retain, nonatomic) UIColor *subscribeBtnTitleColor;
@property (retain, nonatomic) UIColor *subscribeBtnImageTintColor;
@property (nonatomic) unsigned long long liveStatus;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *subscribeBtnColor;
@property (retain, nonatomic) UIColor *timeLabelColor;
@property (retain, nonatomic) UIColor *contentlabelColor;
@property (retain, nonatomic) UIColor *titlelabelColor;
@property (retain, nonatomic) UIColor *expiredStatusColor;
@property (retain, nonatomic) UIColor *expiredStatusBgColor;
@property (retain, nonatomic) UIColor *subscribedNumberLabelColor;
@property (nonatomic) BOOL liveStatusViewHidden;
@property (nonatomic) BOOL multiAvatarViewHidden;
@property (nonatomic) BOOL subscribedNumberLabelHidden;
@property (nonatomic) BOOL expiredStatusViewHidden;
@property (nonatomic) BOOL subscribeBtnHidden;
@property (nonatomic) BOOL subscribeBtnEnable;
@property (copy, nonatomic) id /* block */ bubbleTapAction;
@property (copy, nonatomic) id /* block */ subscribeBtnTapAction;

- (void).cxx_destruct;

@end
