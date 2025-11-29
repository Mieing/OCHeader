@interface AWEClassroomModel.ClassroomLessonHistoryModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long lastPlayTime;
@property (nonatomic) long long progress;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
