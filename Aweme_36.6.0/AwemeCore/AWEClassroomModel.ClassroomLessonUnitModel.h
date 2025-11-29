@class NSString;

@interface AWEClassroomModel.ClassroomLessonUnitModel : MTLModel <MTLJSONSerializing> {
    void /* function */ unitId;
    void /* function */ title;
}

@property (nonatomic, copy) NSString *unitId;
@property (nonatomic, copy) NSString *title;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
