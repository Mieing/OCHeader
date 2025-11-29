@class NSString, UIColor;

@interface MorePanelDataModel : NSObject

@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) BOOL isOppositeState;
@property (retain, nonatomic) NSString *oppositeImageName;
@property (retain, nonatomic) NSString *oppositeTitle;
@property (retain, nonatomic) UIColor *oppositeBackgroundColor;

- (void).cxx_destruct;

@end
