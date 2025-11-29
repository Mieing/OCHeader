@class _TtC17AWEClassroomModel19ClassroomRangeModel;

@interface AWEClassroomModel.ClassroomLessonNoteForecastModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long offset;
@property (nonatomic) long long numNotes;
@property (nonatomic) long long numUsers;
@property (nonatomic, retain) _TtC17AWEClassroomModel19ClassroomRangeModel *segmentOffset;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
