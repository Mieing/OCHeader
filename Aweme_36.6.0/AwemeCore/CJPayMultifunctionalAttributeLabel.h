@class NSMutableDictionary, NSMutableArray;

@interface CJPayMultifunctionalAttributeLabel : UILabel

@property (retain, nonatomic) NSMutableDictionary *iconCacheDic;
@property (retain, nonatomic) NSMutableArray *rangeArray;
@property (retain, nonatomic) NSMutableArray *linkBlockArray;

- (void)updateWithItemModels:(id)a0;
- (id)p_buildDescAttributeStrWithItemModels:(id)a0;
- (id)p_getNoCacheUrlsWithItemModels:(id)a0;
- (void)p_asyncDownloadImgWithUrls:(id)a0 completionBlock:(id /* block */)a1;
- (id)p_buildTextAttributeStr:(id)a0 mainAttributeStr:(id)a1;
- (id)p_buildIconAttributeStr:(id)a0 mainAttributeStr:(id)a1 unifiedLineHeight:(double)a2;
- (id)p_imageWithRoundedCorners:(id)a0 radius:(double)a1 imageEdgeLen:(double)a2;
- (BOOL)p_canProcessTouch:(long long)a0;
- (id /* block */)p_getLinkBlockWithPointIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
