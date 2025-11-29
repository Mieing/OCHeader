@class UIColor, UIFont;

@interface ReaderStyleWrap : NSObject

@property (retain, nonatomic) UIColor *m_color;
@property (retain, nonatomic) UIColor *m_wxColor;
@property (retain, nonatomic) UIFont *m_font;
@property (nonatomic) BOOL m_bUnderline;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } m_range;

- (long long)compare:(id)a0;
- (id)getColor;
- (void).cxx_destruct;

@end
