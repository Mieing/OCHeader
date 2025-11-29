@interface DVEVideoSegmentClipInfo : NSObject

@property (nonatomic) unsigned long long clipType;
@property (nonatomic) double headOffset;
@property (nonatomic) double tailOffset;
@property (nonatomic) double bothPreOffset;
@property (nonatomic) double bothOffset;

+ (id)infoForBoth:(double)a0 offset:(double)a1;
+ (id)infoForHead:(double)a0;
+ (id)infoForTail:(double)a0;
+ (id)infoForType:(unsigned long long)a0;

@end
