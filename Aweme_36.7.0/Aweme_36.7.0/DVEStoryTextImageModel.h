@class DVEStoryBgColor, NSString, DVEStoryColor, DVEStoryFontModel, NSIndexPath;

@interface DVEStoryTextImageModel : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double fontScale;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) DVEStoryColor *fontColor;
@property (retain, nonatomic) DVEStoryBgColor *bgColor;
@property (retain, nonatomic) NSIndexPath *fontIndex;
@property (retain, nonatomic) DVEStoryFontModel *fontModel;
@property (nonatomic) unsigned long long textStyle;
@property (nonatomic) long long alignmentType;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) double widthLimit;

- (void).cxx_destruct;
- (id)init;

@end
