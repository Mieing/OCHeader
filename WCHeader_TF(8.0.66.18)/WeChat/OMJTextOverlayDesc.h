@class NSString, NSDictionary;

@interface OMJTextOverlayDesc : OMJOverlayDesc

@property (retain, nonatomic) NSString *text;
@property (nonatomic) double maximumWidth;
@property (retain, nonatomic) NSDictionary *textStyles;
@property (retain, nonatomic) NSDictionary *layerStyles;

- (id)initWithText:(id)a0 maximumWidth:(double)a1 textStyles:(id)a2 layerStyles:(id)a3 spatialInfo:(id)a4;
- (void).cxx_destruct;

@end
