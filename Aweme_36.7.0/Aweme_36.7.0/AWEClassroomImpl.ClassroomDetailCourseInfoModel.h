@class NSArray, NSString, _TtC17AWEClassroomModel20ClassroomCourseModel;

@interface AWEClassroomImpl.ClassroomDetailCourseInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ serviceEntranceList;
    void /* function */ buySchema;
    void /* function */ epStudentUid;
    void /* function */ epClassSchema;
}

@property (nonatomic, retain) _TtC17AWEClassroomModel20ClassroomCourseModel *course;
@property (nonatomic, copy) NSArray *serviceEntranceList;
@property (nonatomic, copy) NSString *buySchema;
@property (nonatomic, copy) NSString *epStudentUid;
@property (nonatomic, copy) NSString *epClassSchema;
@property (nonatomic) long long punishmentStatus;

+ (id)courseJSONTransformer;
+ (id)serviceEntranceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
