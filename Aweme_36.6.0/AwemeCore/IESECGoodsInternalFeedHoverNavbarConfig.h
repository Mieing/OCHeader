@class NSString;

@interface IESECGoodsInternalFeedHoverNavbarConfig : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *imageName;
@property (nonatomic) SEL actionSel;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (nonatomic) BOOL shouldDisplay;
@property (retain, nonatomic) NSString *accessibilityName;

- (void).cxx_destruct;

@end
