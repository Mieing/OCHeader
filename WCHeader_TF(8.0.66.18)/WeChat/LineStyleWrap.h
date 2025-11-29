@class UIColor, NSString, UIFont;

@interface LineStyleWrap : NSObject

@property (retain, nonatomic) UIColor *m_color;
@property (retain, nonatomic) UIColor *m_wxColor;
@property (retain, nonatomic) NSString *m_nsChars;
@property (retain, nonatomic) UIFont *m_font;
@property (nonatomic) double m_fOffset;
@property (nonatomic) BOOL m_bUnderline;
@property (nonatomic) double m_fRealLength;
@property (nonatomic) BOOL m_hide;
@property (retain, nonatomic) NSString *m_nsStrikeThroughWording;
@property (retain, nonatomic) UIColor *m_strikeThroughWordingColor;

- (long long)compare:(id)a0;
- (id)getColor;
- (void).cxx_destruct;

@end
