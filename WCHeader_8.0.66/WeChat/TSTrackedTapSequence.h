@class NSArray;

@interface TSTrackedTapSequence : TSTrackedItem <TSFinalTrackedItem>

@property (retain, nonatomic) NSArray *taps;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;

- (id)initWithTaps:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
