@class _TtC17AWEClassroomModel20ClassroomLessonModel;

@interface AWEClassroomModel.ClassroomCourseLearningInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic, retain) _TtC17AWEClassroomModel20ClassroomLessonModel *learningLesson;

+ (id)learningLessonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
