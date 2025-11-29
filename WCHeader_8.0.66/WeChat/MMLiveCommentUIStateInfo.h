@class NSString;

@interface MMLiveCommentUIStateInfo : NSObject

@property (nonatomic) double currentDynamicFontScale;
@property (nonatomic) double currentCommentTableWidth;
@property (retain, nonatomic) NSString *commentlayoutIdentifyKey;
@property (nonatomic) double currentCommentTableHeight;

- (void)updateCommentLayoutIdentifyKey;
- (void).cxx_destruct;

@end
