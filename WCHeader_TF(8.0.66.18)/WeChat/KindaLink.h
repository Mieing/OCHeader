@class NSString, MMVoidCallback, MMDynamicColor;

@interface KindaLink : NSObject <MMKLink>

@property (retain, nonatomic) NSString *m_text;
@property (retain, nonatomic) MMVoidCallback *m_linkCallback;
@property (retain, nonatomic) MMDynamicColor *m_linkColor;
@property (nonatomic) long long m_linkStyle;
@property (copy, nonatomic) NSString *fontName;
@property (retain, nonatomic) MMDynamicColor *linkBkgColor;
@property (nonatomic) int linkBkgRadius;
@property (nonatomic) double linkTextSize;
@property (nonatomic) long long fontStyle;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } m_range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setText:(id)a0;
- (void)setLinkColor:(id)a0;
- (void)setLinkCallbackImpl:(id)a0;
- (void)setLinkStyle:(long long)a0;
- (void)setLinkFont:(id)a0;
- (id)getText;
- (id)getLinkColor;
- (id)getLinkCallbackImpl;
- (long long)getLinkStyle;
- (id)getLinkFont;
- (void)setBackground:(id)a0 radius:(int)a1;
- (id)getLinkBkgColor;
- (int)getLinkBkgRadius;
- (void)setTextSize:(float)a0;
- (float)getLinkTextSize;
- (long long)getFontStyle;
- (void).cxx_destruct;

@end
