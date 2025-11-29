@interface WNContentStorage : RTEContentStorage

@property (nonatomic) BOOL isSmallImageMode;
@property (nonatomic) BOOL enableNewOrderList;

+ (id)contentDefaultTextAttribute;
+ (id)contentCustomTextAttributeWithFont:(id)a0;
+ (id)contentDefaultParagraphStyle;
+ (id)convertGeneratedSectionWrapToContentStorage:(id)a0 withFavDataList:(id)a1;
+ (id)convertGeneratedSectionWrapToContentStorage:(id)a0 withFavDataList:(id)a1 isSmallImageMode:(BOOL)a2;
+ (unsigned int)convertRTEAttributeNodeTypeToWN:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)mediaAttachmentCount;
- (BOOL)containListInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containListPrefixInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containRecordingAttributeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containImageOrVideoAttributeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containAttachmentInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containMediaAttachmentInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containHeaderAttachmentInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containOrdinaryCharacterInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isImageOnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canBoldOnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canUnBoldOnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canHighlightOnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canUnHighlightOnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canSetLargeImageOnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canSetSmallImageOnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)needSeperateAtLocation:(unsigned long long)a0;
- (BOOL)updateListAttributeSinceIndex:(unsigned long long)a0;
- (void)deleteCententAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isAttribute:(id)a0 extendableAtIndex:(unsigned long long)a1 isPreNode:(BOOL)a2;
- (id)buildAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)typingAttributesAtIndex:(unsigned long long)a0;
- (id)attributesAtIndex:(unsigned long long)a0;
- (BOOL)needResetParagraphSpacingWithList:(id)a0 node:(id)a1;
- (void)removeBackgroundColorForNewLine:(id)a0;
- (void)adjustTextAlignmentFor:(id)a0;

@end
