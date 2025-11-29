@interface MMFavComponentFactory : NSObject

+ (double)heightForFavItem:(id)a0 cellStyle:(unsigned long long)a1;
+ (double)heightForFavItem:(id)a0 isMultiSelect:(BOOL)a1 cellStyle:(unsigned long long)a2;
+ (double)heightForFavItem:(id)a0 isMultiSelect:(BOOL)a1 cellStyle:(unsigned long long)a2 isFoldBtn:(BOOL)a3 isFolding:(BOOL)a4;
+ (id)createComponentByFavItem:(id)a0 showDataSize:(BOOL)a1 cellStyle:(unsigned long long)a2 delegate:(id)a3 isFoldBtn:(BOOL)a4 isFolding:(BOOL)a5 foldingSize:(long long)a6;
+ (id)getFavTextCellText:(id)a0;
+ (void)getFavNoteCellTitleAndDesc:(id)a0 outTitle:(id *)a1 outDesc:(id *)a2;
+ (id)tryNeedConvertToItemWithData:(id)a0 inItem:(id)a1;
+ (id)createComponentByItemDataField:(id)a0 inItem:(id)a1 cellStyle:(unsigned long long)a2 delegate:(id)a3;
+ (double)heightForItemDataField:(id)a0 inItem:(id)a1 isMultiSelect:(BOOL)a2 cellStyle:(unsigned long long)a3;
+ (int)dataEnumToItemEnum:(int)a0;
+ (id)convertVoiceDurationToStr:(unsigned int)a0;
+ (id)convertVoiceDurationToStrInDigits:(int)a0;
+ (id)getDataThumbPath:(id)a0 largeImage:(BOOL)a1;
+ (id)getFavNoteTitle:(id)a0;
+ (id)genImageComponentDataFrom:(id)a0;
+ (void)configImageComData:(id)a0 withFavItem:(id)a1;
+ (void)configTextComData:(id)a0 withFavItem:(id)a1 cellStyle:(unsigned long long)a2;
+ (void)getRecordTextComponentData:(id)a0 WithItem:(id)a1;
+ (void)newConfigNoteComData:(id)a0 withFavItem:(id)a1 cellStyle:(unsigned long long)a2;
+ (void)configBaselineComData:(id)a0 withFavItem:(id)a1 showDataSize:(BOOL)a2 cellStyle:(unsigned long long)a3;
+ (void)getIconWithFavItem:(id)a0 FavData:(id)a1 DataFmt:(id)a2 ImageComponentData:(id)a3;
+ (id)getLogoImageWith:(id)a0;
+ (id)getAuthorNameWith:(id)a0;

@end
