@class NSArray, NSString, AWEStoryColor, AWEStoryFontModel;

@interface ACCTextStickerInputViewConfig : NSObject

@property (nonatomic) unsigned long long editStyle;
@property (nonatomic) BOOL supportTextTemplate;
@property (retain, nonatomic) NSArray *itemIdentityList;
@property (retain, nonatomic) NSArray *textStickerEditToolBarItems;
@property (nonatomic) unsigned long long targetToolType;
@property (retain, nonatomic) NSString *textContent;
@property (retain, nonatomic) AWEStoryColor *textColor;
@property (retain, nonatomic) AWEStoryFontModel *textFont;
@property (nonatomic) unsigned long long textStyle;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) NSString *textTemplateId;
@property (nonatomic) unsigned long long templateCategoryIndex;

- (void).cxx_destruct;

@end
