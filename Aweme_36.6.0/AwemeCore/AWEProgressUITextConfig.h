@class NSShadow, UIFont, AWEProgressUIColorConfig;

@interface AWEProgressUITextConfig : NSObject

@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) AWEProgressUIColorConfig *textColorConfig;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) NSShadow *textShadow;

+ (id)textConfigWithFont:(id)a0 textColorConfig:(id)a1 textAlignment:(long long)a2 shadow:(id)a3;

- (void).cxx_destruct;

@end
