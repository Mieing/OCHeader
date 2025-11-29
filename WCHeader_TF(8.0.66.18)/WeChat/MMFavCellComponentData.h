@class MMFavBaselineComponentData, MMFavTextComponentData, NSArray, MMFavImageComponentData;

@interface MMFavCellComponentData : MMComponentData

@property (nonatomic) long long favType;
@property (retain, nonatomic) MMFavBaselineComponentData *m_baselineComData;
@property (retain, nonatomic) MMFavImageComponentData *m_imageComData;
@property (retain, nonatomic) MMFavTextComponentData *m_textComData;
@property (retain, nonatomic) NSArray *m_imageComDataArr;
@property (nonatomic) BOOL onlyImageOrVideo;
@property (nonatomic) unsigned long long cellStyle;
@property (nonatomic) BOOL isFoldBtnStyle;
@property (nonatomic) BOOL isFolding;
@property (nonatomic) int foldingSize;

- (id)init;
- (void).cxx_destruct;

@end
