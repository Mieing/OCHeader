@class NSString;

@interface AWEClassroomModel.ClassroomLabelModel : MTLModel <MTLJSONSerializing> {
    void /* function */ text;
}

@property (nonatomic, copy) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
