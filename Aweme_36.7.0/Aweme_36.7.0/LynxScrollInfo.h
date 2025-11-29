@class NSString, UIScrollView, UIView;
@protocol LUIBodyView;

@interface LynxScrollInfo : NSObject <NSCopying>

@property (weak, nonatomic) UIView<LUIBodyView> *lynxView;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *scrollMonitorTagName;
@property (readonly, nonatomic) NSString *lynxViewUrl;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL decelerate;

+ (id)infoWithScrollView:(id)a0 tagName:(id)a1 scrollMonitorTagName:(id)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
