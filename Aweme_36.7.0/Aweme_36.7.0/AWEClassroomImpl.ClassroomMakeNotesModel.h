@class NSString;

@interface AWEClassroomImpl.ClassroomMakeNotesModel : MTLModel <MTLJSONSerializing> {
    void /* function */ noteId;
}

@property (nonatomic, copy) NSString *noteId;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
