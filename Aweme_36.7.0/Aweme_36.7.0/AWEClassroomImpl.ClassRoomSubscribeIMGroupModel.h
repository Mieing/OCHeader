@class NSString;

@interface AWEClassroomImpl.ClassRoomSubscribeIMGroupModel : MTLModel <MTLJSONSerializing> {
    void /* function */ reason;
    void /* function */ schema;
}

@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
