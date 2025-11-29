@class NSString, NSArray, UIImage;

@interface AWEDesktopLiveActivityAskPopupModel : NSObject

@property (nonatomic) unsigned long long guideStyle;
@property (copy, nonatomic) NSString *liveActivityScene;
@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *subBusiness;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *leftButtonTitle;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (copy, nonatomic) NSArray *contentImages;
@property (retain, nonatomic) UIImage *contentImage;
@property (nonatomic) double contentWidth;
@property (nonatomic) double contentHeight;
@property (nonatomic) double contentAreaHeight;

- (void).cxx_destruct;

@end
