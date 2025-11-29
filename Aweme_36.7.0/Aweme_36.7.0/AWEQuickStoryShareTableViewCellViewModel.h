@class NSString, NSURL, UIImage, NSAttributedString;
@protocol AWEIMShareModelProtocol, AWEIMStreakDisplayManagerProtocol;

@interface AWEQuickStoryShareTableViewCellViewModel : NSObject

@property (nonatomic) unsigned long long cellType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *iconImageURL;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL iconImageNeedCorner;
@property (nonatomic) long long iconImageContentMode;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> IMShareModel;
@property (nonatomic) unsigned long long IMSharedStatus;
@property (nonatomic) unsigned long long downloadStatus;
@property (nonatomic) double downloadProgress;
@property (nonatomic) double cellHeight;
@property (nonatomic) double contentCenterYOffset;
@property (nonatomic) BOOL hiddenBottomLine;
@property (nonatomic) BOOL needHighlighted;
@property (nonatomic) unsigned long long functionType;
@property (copy, nonatomic) NSAttributedString *statusAttStr;
@property (nonatomic) struct CGSize { double width; double height; } statusAttStrSize;
@property (copy, nonatomic) NSString *consecutiveChatTrackColor;
@property (copy, nonatomic) NSString *rightButtonTitleStateNormal;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (copy, nonatomic) id /* block */ buttonClickedBlock;

- (void).cxx_destruct;
- (id)initWithCellType:(unsigned long long)a0;

@end
