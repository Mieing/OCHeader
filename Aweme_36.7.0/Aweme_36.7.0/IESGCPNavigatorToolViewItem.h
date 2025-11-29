@class NSString, UIColor, UIView;

@interface IESGCPNavigatorToolViewItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) id /* block */ onClicked;
@property (readonly, nonatomic) double itemWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) UIView *relatedView;

- (void).cxx_destruct;

@end
