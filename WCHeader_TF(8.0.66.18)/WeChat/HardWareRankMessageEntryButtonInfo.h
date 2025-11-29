@class NSString, UIColor, CMessageWrap;

@interface HardWareRankMessageEntryButtonInfo : NSObject {
    CMessageWrap *m_msgWrap;
}

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) UIColor *iconColor;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightBackgroundColor;

- (id)initWithMsgwrap:(id)a0;
- (double)marginRight;
- (void).cxx_destruct;

@end
