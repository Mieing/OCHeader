@class NSString, NSNumber;

@interface AnnieUgShowLiveActivityAskPopupWindowParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *leftButton;
@property (copy, nonatomic) NSString *rightButton;
@property (retain, nonatomic) NSNumber *contentImageWidth;
@property (retain, nonatomic) NSNumber *contentImageHeight;
@property (copy, nonatomic) NSString *liveActivityField;
@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *subBusiness;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
