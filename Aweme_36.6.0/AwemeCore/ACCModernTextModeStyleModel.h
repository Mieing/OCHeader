@class NSString, ACCRichTextColorStyleModel, AWEStoryFontModel;

@interface ACCModernTextModeStyleModel : NSObject <NSCopying>

@property (copy, nonatomic) ACCRichTextColorStyleModel *colorModel;
@property (nonatomic) double fontSize;
@property (nonatomic) long long alignmentType;
@property (nonatomic) long long textStyle;
@property (copy, nonatomic) AWEStoryFontModel *fontModel;
@property (copy, nonatomic) NSString *fontId;
@property (nonatomic) long long colorIndex;
@property (nonatomic) long long styleIndex;
@property (nonatomic) long long fontIndex;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
