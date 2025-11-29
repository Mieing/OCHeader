@class UIColor, UIFont;

@interface WeChat.EnhancedLabel : NSObject {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ primitiveStyle;
    void /* unknown type, empty encoding */ replaceModifiers;
    void /* unknown type, empty encoding */ styleModifiers;
    void /* unknown type, empty encoding */ drawModifiers;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic) long long lineBreakMode;

- (id)strokeWithColor:(id)a0 width:(double)a1;
- (id)parseEmoticon;
- (id)initWithString:(id)a0;
- (id)resolve;
- (id)init;
- (void).cxx_destruct;

@end
