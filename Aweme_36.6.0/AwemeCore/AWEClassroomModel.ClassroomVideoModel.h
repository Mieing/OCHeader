@class NSString, _TtC17AWEClassroomModel19ClassroomImageModel;

@interface AWEClassroomModel.ClassroomVideoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ uri;
    void /* function */ videoModel;
}

@property (nonatomic, copy) NSString *uri;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic, retain) _TtC17AWEClassroomModel19ClassroomImageModel *coverImage;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *videoModel;

+ (id)coverImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
