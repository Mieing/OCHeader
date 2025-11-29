@class WCAdFullCardDragImageGestureInfo, NSString, WCAdClickBarInfo, WCAdCardBtnInfo, WCAdFullCardEndCoverInfo, WCAdFullCardGestureInfo, WCAdFullCardLongPressGestureInfo;

@interface WCAdFullCardInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int displayType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *descriptionText;
@property (nonatomic) unsigned int markMaxAlpha;
@property (nonatomic) unsigned int titlePosition;
@property (retain, nonatomic) WCAdFullCardGestureInfo *adGestureInfo;
@property (retain, nonatomic) NSString *maskImg;
@property (nonatomic) unsigned long long maskImgDisappearTime;
@property (retain, nonatomic) NSString *coverImg;
@property (nonatomic) unsigned long long coverImgAppearTime;
@property (retain, nonatomic) WCAdFullCardEndCoverInfo *endCoverInfo;
@property (retain, nonatomic) WCAdFullCardLongPressGestureInfo *longPressGestureInfo;
@property (retain, nonatomic) WCAdFullCardDragImageGestureInfo *dragImageGestureInfo;
@property (retain, nonatomic) WCAdClickBarInfo *adClickBarInfo;
@property (retain, nonatomic) WCAdCardBtnInfo *adGestureClickActionInfo;
@property (nonatomic) double blankViewHeightPercent;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasCoverImage;
- (void).cxx_destruct;

@end
