@class NSArray, BDPCDDynamicCardBorderModel;

@interface BDPCDDynamicCardAtomicModel : BDPCDDynamicCardUIPropsModel

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) BDPCDDynamicCardBorderModel *border;
@property (copy, nonatomic) NSArray *borderRadius;
@property (copy, nonatomic) NSArray *margin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginObject;
@property (copy, nonatomic) NSArray *padding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingObject;
@property (nonatomic) double positionTop;
@property (nonatomic) double positionLeft;
@property (nonatomic) double positionRight;
@property (nonatomic) double positionBottom;
@property (nonatomic) BOOL stackFiller;
@property (nonatomic) unsigned long long stackAlign;

- (double)positionLeftExist;
- (double)positionRightExist;
- (double)positionTopExist;
- (double)positionBottomExist;
- (unsigned long long)stackAlignTypeWithString:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
