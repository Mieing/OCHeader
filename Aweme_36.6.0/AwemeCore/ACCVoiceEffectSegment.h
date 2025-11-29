@class NSString, IESEffectModel;

@interface ACCVoiceEffectSegment : NSObject <NSCoding, ACCSegmentItem>

@property (retain, nonatomic) NSString *internalEffectId;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (retain, nonatomic) IESEffectModel *effect;
@property (retain, nonatomic) NSString *effectId;
@property (nonatomic) double startPosition;
@property (nonatomic) double endPosition;
@property (nonatomic) double zorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStartTime:(double)a0 duration:(double)a1 effect:(id)a2;
- (id)dtoVoiceEffect;
- (id)initWithDTOVoiceEffect:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)endPosition;
- (double)startPosition;
- (void)setStartPosition:(double)a0;
- (void)setEndPosition:(double)a0;

@end
