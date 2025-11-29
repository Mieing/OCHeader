@class NSString;

@interface AWEClassroomModel.ClassroomImageUrlModel : MTLModel <MTLJSONSerializing> {
    void /* function */ url;
}

@property (nonatomic, copy) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
