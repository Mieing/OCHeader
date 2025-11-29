@class NSString;

@interface AWEClassroomModel.ClassroomUserModel : MTLModel <MTLJSONSerializing> {
    void /* function */ nickName;
    void /* function */ avatarURL;
    void /* function */ teacherProfileSchema;
}

@property (nonatomic) long long epUid;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *avatarURL;
@property (nonatomic, copy) NSString *teacherProfileSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
