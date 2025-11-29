@class NSArray;

@interface ACCTextStickerEditToolBarDataSource : NSObject

@property (retain, nonatomic) NSArray *toolOptionList;
@property (nonatomic) BOOL isNewStyle;

- (id)initWithNewStyle:(BOOL)a0;
- (id)toolbarTypeValueWithKey:(id)a0;
- (id)textTemplateSwitchOptionListWith:(BOOL)a0;
- (id)textTemplateSwitchOptionListWithTypes:(id)a0;
- (void).cxx_destruct;
- (id)initWithTypes:(id)a0;
- (id)optionAtIndex:(unsigned long long)a0;

@end
