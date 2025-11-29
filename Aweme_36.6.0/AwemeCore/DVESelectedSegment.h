@class NSString, NLETrackSlot_OC;

@interface DVESelectedSegment : NSObject

@property (readonly, nonatomic) NLETrackSlot_OC *slot;
@property (readonly, nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *uuid;

+ (id)segmentWithState:(unsigned long long)a0 slot:(id)a1;

- (BOOL)isMainVideoSegment;
- (BOOL)isMultipleTrackSegment;
- (BOOL)isMusicSegment;
- (BOOL)isEffectSegment;
- (id)initWithState:(unsigned long long)a0 slot:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
