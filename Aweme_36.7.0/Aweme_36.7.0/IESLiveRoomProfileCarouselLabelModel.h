@class UIFont, NSString, UIColor, HTSLiveAnchorTabLabel;

@interface IESLiveRoomProfileCarouselLabelModel : IESLiveDynamicModel

@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) HTSLiveAnchorTabLabel *anchorTabLabel;
@property (retain, nonatomic) NSString *subInfo;
@property (retain, nonatomic) NSString *thirdInfo;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL canCarousel;
@property (copy, nonatomic) id /* block */ carouselAction;
@property (copy, nonatomic) id /* block */ trackAction;
@property (nonatomic) double carouselHeight;
@property (nonatomic) long long infoType;
@property (nonatomic) long long subInfoType;
@property (nonatomic) long long thirdInfoType;
@property (nonatomic) BOOL needAccessibility;
@property (nonatomic) BOOL needMoveUpAccessibility;
@property (nonatomic) BOOL needReplaceAuthentication;
@property (nonatomic) double dslMaxLabelWidth;

- (void).cxx_destruct;

@end
