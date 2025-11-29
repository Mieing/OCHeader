@class NSString;

@interface WCFinderCoverEditOptionModel : NSObject

@property (nonatomic) BOOL shouldShowPreviewBtn;
@property (retain, nonatomic) NSString *titleTips;
@property (retain, nonatomic) NSString *descTips;
@property (nonatomic) BOOL forbidModeChange;
@property (nonatomic) double coverWidHeightRatio;
@property (nonatomic) double leftRightMargin;
@property (nonatomic) BOOL anchorTileShowStyle;

- (id)init;
- (void).cxx_destruct;

@end
