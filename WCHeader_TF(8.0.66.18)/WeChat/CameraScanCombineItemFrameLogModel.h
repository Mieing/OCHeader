@interface CameraScanCombineItemFrameLogModel : NSObject

@property (nonatomic) unsigned long long idx;
@property (nonatomic) long long modVer;
@property (nonatomic) double mvX;
@property (nonatomic) double mvY;
@property (nonatomic) double v;
@property (nonatomic) double vThres;
@property (nonatomic) double bIX1;
@property (nonatomic) double bIX2;
@property (nonatomic) double bIY1;
@property (nonatomic) double bIY2;
@property (nonatomic) double bIS;
@property (nonatomic) int bILbl;

- (id)log24193StringWithItemIdx:(unsigned long long)a0;

@end
