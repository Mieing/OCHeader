@class UIFont, NSString, CContact, UIColor, NSMutableArray;

@interface BizAppBaseMessageViewModel : CommonMessageViewModel <IStrangerContactMgrExt> {
    struct CGSize { double width; double height; } _viewSize;
    struct CGSize { double width; double height; } _titleSize;
    struct CGSize { double width; double height; } _digestSize;
    NSMutableArray *_titleLabelStyles;
    NSMutableArray *_digestLabelStyles;
    double _titleMaxWidth;
    double _digestMaxWidth;
    UIFont *_titleFont;
    UIFont *_digestFont;
    unsigned int _titleMaxLines;
    unsigned int _digestMaxLines;
    BOOL _needShowSourceLine;
}

@property (retain, nonatomic) CContact *bizContact;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewSize;
@property (readonly, nonatomic) NSString *titleStr;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } titleSize;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) unsigned int titleMaxLines;
@property (readonly, nonatomic) double titleMaxWidth;
@property (readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property (readonly, nonatomic) NSString *digestStr;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } digestSize;
@property (readonly, nonatomic) UIFont *digestFont;
@property (readonly, nonatomic) unsigned int digestMaxLines;
@property (readonly, nonatomic) double digestMaxWidth;
@property (readonly, nonatomic) NSMutableArray *digestLabelStyles;
@property (readonly, nonatomic) NSString *sourceNickname;
@property (readonly, nonatomic) NSString *sourceUsrname;
@property (readonly, nonatomic) NSString *sourceDetailStr;
@property (readonly, nonatomic) BOOL needShowSourceLine;
@property (readonly, nonatomic) BOOL needShowSourceDividerLine;
@property (readonly, nonatomic) double sourceViewHeight;
@property (readonly, nonatomic) UIColor *sourceBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (void)resetLayoutCache;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void).cxx_destruct;

@end
