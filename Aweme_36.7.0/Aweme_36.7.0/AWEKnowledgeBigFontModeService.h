@class NSString;

@interface AWEKnowledgeBigFontModeService : HTSService <AWEKnowledgeBigFontModeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bigFontModeOn;
- (struct CGSize { double x0; double x1; })albumSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })albumIconSize:(unsigned long long)a0;
- (double)albumOffset:(unsigned long long)a0;
- (unsigned long long)currentBigFontModeType;
- (double)albumOffsetToolForOffset:(double)a0;
- (id)albumFontForFontSize:(double)a0 withForceMedium:(BOOL)a1;
- (BOOL)enableUseNewSize;
- (id)albumFont:(unsigned long long)a0;
- (id)albumFont:(unsigned long long)a0 forceMedium:(BOOL)a1;
- (id)newAlbumFont:(unsigned long long)a0 forceMedium:(BOOL)a1;
- (id)currentFontForSizeArray:(id)a0 weight:(long long)a1;
- (double)currentSize:(id)a0;
- (struct CGSize { double x0; double x1; })newAlbumIconSize:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })currentSquareIconSize:(id)a0;
- (double)newAlbumOffset:(unsigned long long)a0;

@end
