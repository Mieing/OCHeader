@class NSString, NSArray, _TtC17AWEClassroomModel32ClassroomCourseLearningInfoModel;

@interface AWEClassroomModel.ClassroomCourseModel : MTLModel <MTLJSONSerializing> {
    void /* function */ courseIdStr;
    void /* function */ title;
    void /* function */ squareCover;
    void /* function */ squareCoverBlur;
    void /* function */ desc;
    void /* function */ teacherList;
    void /* function */ watermark;
    void /* function */ copyrightOwner;
    void /* function */ studyExpireTimeCopywriterPlans;
}

@property (nonatomic) long long courseId;
@property (nonatomic, copy) NSString *courseIdStr;
@property (nonatomic) long long courseType;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *squareCover;
@property (nonatomic, copy) NSArray *squareCoverBlur;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSArray *teacherList;
@property (nonatomic) long long bizType;
@property (nonatomic) long long userCourseStatus;
@property (nonatomic) BOOL enableWatermark;
@property (nonatomic, copy) NSString *watermark;
@property (nonatomic) BOOL enableAntiTheaterRip;
@property (nonatomic) BOOL enableCopyrightStatement;
@property (nonatomic, copy) NSString *copyrightOwner;
@property (nonatomic) long long presetLessonNum;
@property (nonatomic) long long lessonNum;
@property (nonatomic, retain) _TtC17AWEClassroomModel32ClassroomCourseLearningInfoModel *learningInfo;
@property (nonatomic, copy) NSString *studyExpireTimeCopywriterPlans;

+ (id)squareCoverBlurJSONTransformer;
+ (id)teacherListJSONTransformer;
+ (id)learningInfoInfoJSONTransformer;
+ (id)squareCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
