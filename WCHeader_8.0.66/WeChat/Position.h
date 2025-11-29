@class Coordinate;

@interface Position : WXPBGeneratedMessage

@property (nonatomic) unsigned int left;
@property (nonatomic) unsigned int top;
@property (nonatomic) unsigned int right;
@property (nonatomic) unsigned int bottom;
@property (retain, nonatomic) Coordinate *leftTop;
@property (retain, nonatomic) Coordinate *rightTop;
@property (retain, nonatomic) Coordinate *rightBottom;
@property (retain, nonatomic) Coordinate *leftBottom;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
