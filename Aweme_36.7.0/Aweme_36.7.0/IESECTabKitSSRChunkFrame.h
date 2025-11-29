@class NSData;

@interface IESECTabKitSSRChunkFrame : NSObject

@property (nonatomic) unsigned char type;
@property (nonatomic) int length;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
