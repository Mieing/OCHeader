@class NSString;

@interface AWEIMCustomMenuModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *lightImageURL;
@property (copy, nonatomic) NSString *darkImageURL;
@property (weak, nonatomic) id actionTarget;
@property (nonatomic) SEL actionSelector;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } iconTransform;
@property (copy, nonatomic) id /* block */ willPerformMenuActionSelectorBlock;
@property (copy, nonatomic) NSString *trackerName;

- (void).cxx_destruct;
- (id)init;

@end
