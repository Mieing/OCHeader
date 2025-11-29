@class AWEStoryColor, AWEStoryFontModel, NSString;

@interface ACCTextStickerPanelSelectConfig : NSObject

@property (retain, nonatomic) AWEStoryColor *color;
@property (nonatomic) long long alignmentType;
@property (nonatomic) unsigned long long textStyle;
@property (retain, nonatomic) AWEStoryFontModel *fontModel;
@property (retain, nonatomic) NSString *effectId;
@property (nonatomic) long long categoryIndex;
@property (nonatomic) double fontScale;

- (void).cxx_destruct;
- (id)init;

@end
