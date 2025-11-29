@class _TtC17AWEClassroomModel20ClassroomLessonModel, _TtC17AWEClassroomModel19ClassroomBlockModel, _TtC17AWEClassroomModel24ClassroomLessonUnitModel, _TtC17AWEClassroomModel18ClassroomItemModel;

@interface AWEClassroomModel.ClassroomCellModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cellType;
@property (nonatomic) long long cellId;
@property (nonatomic, retain) _TtC17AWEClassroomModel18ClassroomItemModel *item;
@property (nonatomic, retain) _TtC17AWEClassroomModel20ClassroomLessonModel *lesson;
@property (nonatomic, retain) _TtC17AWEClassroomModel24ClassroomLessonUnitModel *lessonUnit;
@property (nonatomic, retain) _TtC17AWEClassroomModel19ClassroomBlockModel *block;

+ (id)itemJSONTransformer;
+ (id)lessonJSONTransformer;
+ (id)lessonUnitJSONTransformer;
+ (id)blockJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
