@class NSString;

@interface TPSubtitleRenderModel : NSObject

@property (nonatomic) int canvasWidth;
@property (nonatomic) int canvasHeight;
@property (nonatomic) unsigned long long paramFlags;
@property (nonatomic) unsigned long long paramPriorityFlags;
@property (copy, nonatomic) NSString *familyName;
@property (nonatomic) float fontSize;
@property (nonatomic) float fontScale;
@property (nonatomic) unsigned int fontColor;
@property (nonatomic) float outlineWidth;
@property (nonatomic) unsigned int outlineColor;
@property (nonatomic) unsigned int fontStyleOptions;
@property (nonatomic) float lineSpace;
@property (nonatomic) float startMargin;
@property (nonatomic) float endMargin;
@property (nonatomic) float verticalMargin;

- (void).cxx_destruct;

@end
