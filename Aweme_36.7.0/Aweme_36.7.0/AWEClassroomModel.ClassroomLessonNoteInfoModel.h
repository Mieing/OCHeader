@class NSString, NSArray;

@interface AWEClassroomModel.ClassroomLessonNoteInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ videoGroupId;
    void /* function */ forecasts;
}

@property (nonatomic, copy) NSString *videoGroupId;
@property (nonatomic, copy) NSArray *forecasts;
@property (nonatomic) long long numNotes;
@property (nonatomic) long long numUserNotes;

+ (id)forecastsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
