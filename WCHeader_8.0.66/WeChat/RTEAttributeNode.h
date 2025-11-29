@class UIColor, NSObject, FavoritesItemDataField;
@protocol NSCopying;

@interface RTEAttributeNode : RTELinkedListNode

@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) unsigned int headIndex;
@property (nonatomic) unsigned int listIndex;
@property (nonatomic) BOOL checked;
@property (readonly, nonatomic) FavoritesItemDataField *favData;
@property (nonatomic) unsigned int listType;
@property (nonatomic) unsigned int nodeType;
@property (nonatomic) BOOL effective;
@property (retain, nonatomic) NSObject<NSCopying> *attributeInfo;

+ (id)creatEmptyNote:(unsigned int)a0 Length:(unsigned long long)a1;

- (void)forceSetListIndex:(unsigned int)a0;
- (void)changeImage:(id)a0;
- (BOOL)isGifAttribute;
- (BOOL)isOrderListPrefixAttribute;
- (BOOL)isListPrefixAttribute;
- (BOOL)isListContentAttribute;
- (void)configWithImage:(id)a0;
- (void)configWithGifData:(id)a0;
- (void)configWithVideoPath:(id)a0 thumbPath:(id)a1 duration:(unsigned int)a2;
- (void)configWithFilePath:(id)a0 fileName:(id)a1;
- (void)configWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)configWithLocation:(id)a0;
- (void)configWithHr;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canBeMergedInto:(id)a0;
- (id)nextAttributeNode;
- (id)preAttributeNode;
- (void).cxx_destruct;

@end
