@class NSArray;

@interface IESStickerAnimation : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *values;
@property (copy, nonatomic) NSArray *frameTs;
@property (nonatomic) BOOL isAbsoluteFrameTs;
@property (nonatomic) unsigned long long repeatType;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
