@class GCRGameLifeRedPointInfo;

@interface GCRedPointLogicTypeModel : WXPBGeneratedMessage

@property (nonatomic) unsigned int redpointLogicType;
@property (nonatomic) double startTimeStamp;
@property (retain, nonatomic) GCRGameLifeRedPointInfo *curGameLifeRedPointInfo;

+ (void)initialize;

- (void)setCurGameLifeRedPointInfo:(id)a0;
- (id)curGameLifeRedPointInfo;
- (void)setStartTimeStamp:(double)a0;
- (double)startTimeStamp;
- (void)setRedpointLogicType:(unsigned int)a0;
- (unsigned int)redpointLogicType;

@end
