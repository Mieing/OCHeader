@class NSArray;

@interface AWEClassroomModel.ClassroomImageModel : MTLModel <MTLJSONSerializing> {
    void /* function */ urlList;
}

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic, copy) NSArray *urlList;

+ (id)urlListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
