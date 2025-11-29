@class UIColor, NSString, UIFont, NSURL, NSAttributedString, FinderJumpInfo_PartialCarouselCardStyle_SubCarouselDesc;

@interface WCFinderJumpInfoDynamicCarouselDetailSubViewItem : NSObject

@property (class, readonly, nonatomic) UIColor *defaultContentColor;

@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) long long iconFileType;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) UIColor *iconColor;
@property (nonatomic) double iconAlpha;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSAttributedString *detailAttributedText;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (nonatomic) BOOL showsBorder;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIFont *textFont;
@property (readonly, nonatomic) FinderJumpInfo_PartialCarouselCardStyle_SubCarouselDesc *subDesc;
@property (readonly, nonatomic) int type;

- (id)initWithSubDesc:(id)a0;
- (id)init;
- (void)_init;
- (void)reloadViewProperties;
- (void)updateTypicalViewProperties;
- (BOOL)shouldUpdateTypicalViewPropertiesConstantly;
- (BOOL)isCountdownEnded;
- (BOOL)isCountdownEndedAtTime:(unsigned long long)a0;
- (id)generateCountdownDetailText;
- (id)generateScoreDetailAttributedText;
- (void).cxx_destruct;

@end
