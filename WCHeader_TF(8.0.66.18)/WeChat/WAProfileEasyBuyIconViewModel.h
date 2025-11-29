@class NSString, UIFont, UIColor;

@interface WAProfileEasyBuyIconViewModel : NSObject

@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) UIFont *descFont;
@property (retain, nonatomic) UIColor *descColor;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned int iconWidth;
@property (nonatomic) unsigned int iconHeight;

+ (id)createWithRelievedBuyInfo:(id)a0 position:(long long)a1;

- (struct CGSize { double x0; double x1; })viewSize;
- (long long)descViewWidth;
- (long long)iconViewWidth;
- (void).cxx_destruct;

@end
