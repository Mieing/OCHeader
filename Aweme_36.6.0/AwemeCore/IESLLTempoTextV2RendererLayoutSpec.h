@class IESLLTempoTextLineHeightAdaptation;

@interface IESLLTempoTextV2RendererLayoutSpec : NSObject

@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) unsigned long long textOverflow;
@property (readonly, nonatomic) long long maxLineNum;
@property (readonly, nonatomic) long long textAlignment;
@property (nonatomic) long long verticalAlign;
@property (readonly, nonatomic) float lineHeight;
@property (retain, nonatomic) IESLLTempoTextLineHeightAdaptation *layoutManagerDelegate;

- (BOOL)isEqualToSpec:(id)a0;
- (id)initWithWidth:(double)a0 height:(double)a1 textOverflow:(unsigned long long)a2 maxLineNum:(long long)a3 textAlignment:(long long)a4 lineHeight:(float)a5;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;

@end
