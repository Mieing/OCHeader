@class NSArray, NSDictionary, NSNumber;

@interface ACCModernTextToolBarConfig : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *itemIdentityList;
@property (retain, nonatomic) NSDictionary *editToolViewsDict;
@property (nonatomic) BOOL includeKeyboard;
@property (nonatomic) BOOL isFromTextMode;
@property (nonatomic) BOOL isFromIMRecord;
@property (nonatomic) BOOL unifyTextInput;
@property (retain, nonatomic) NSNumber *displayTextTemplateStyle;
@property (retain, nonatomic) NSArray *textStickerEditToolBarItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
