@class NSArray, NSDictionary;

@interface OMJLyricOverlayDesc : OMJOverlayDesc

@property (readonly, nonatomic) NSArray *lyricInfos;
@property (nonatomic) double maximumWidth;
@property (retain, nonatomic) NSDictionary *textStyles;
@property (retain, nonatomic) NSDictionary *layerStyles;

- (id)initWithLyricInfos:(id)a0 maximumWidth:(double)a1 textStyles:(id)a2 layerStyles:(id)a3 spatialInfo:(id)a4;
- (void).cxx_destruct;

@end
