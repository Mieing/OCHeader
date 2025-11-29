@class _TtC17AWEClassroomModel19ClassroomVideoModel, NSString, _TtC17AWEClassroomModel28ClassroomLessonNoteInfoModel, _TtC17AWEClassroomModel24ClassroomLessonUnitModel, _TtC17AWEClassroomModel18ClassroomUserModel, _TtC17AWEClassroomModel27ClassroomLessonHistoryModel;

@interface AWEClassroomModel.ClassroomLessonModel : MTLModel <MTLJSONSerializing> {
    void /* function */ title;
    void /* function */ roomSchema;
    void /* unknown type, empty encoding */ isTrial;
}

@property (nonatomic) long long lessonId;
@property (nonatomic) long long lessonType;
@property (nonatomic) long long lessonNumber;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) _TtC17AWEClassroomModel18ClassroomUserModel *teacherInfo;
@property (nonatomic, retain) _TtC17AWEClassroomModel24ClassroomLessonUnitModel *unit;
@property (nonatomic, retain) _TtC17AWEClassroomModel19ClassroomVideoModel *video;
@property (nonatomic) long long trialType;
@property (nonatomic, retain) _TtC17AWEClassroomModel28ClassroomLessonNoteInfoModel *noteInfo;
@property (nonatomic) long long roomStatus;
@property (nonatomic) long long startTime;
@property (nonatomic) long long playbackStatus;
@property (nonatomic, copy) NSString *roomSchema;
@property (nonatomic, retain) _TtC17AWEClassroomModel27ClassroomLessonHistoryModel *history;
@property (nonatomic, readonly) BOOL isLandscape;

+ (id)teacherInfoJSONTransformer;
+ (id)videoJSONTransformer;
+ (id)historyJSONTransformer;
+ (id)unitJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
