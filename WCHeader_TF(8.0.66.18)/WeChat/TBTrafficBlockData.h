@interface TBTrafficBlockData : NSObject

@property (nonatomic) int level;
@property (nonatomic) int blockId;
@property (nonatomic) unsigned int timeStamp;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } mapRect;
@property (nonatomic) int dataType;
@property (nonatomic) unsigned int crc;

- (BOOL)isEqual:(id)a0;
- (id)description;

@end
