@class NSString, IESECSliceXFrameAnimatableStyle;

@interface IESECSliceXFrameAnimation : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) IESECSliceXFrameAnimatableStyle *startStyle;
@property (retain, nonatomic) IESECSliceXFrameAnimatableStyle *endStyle;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
