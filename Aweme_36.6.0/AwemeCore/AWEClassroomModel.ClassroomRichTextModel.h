@class NSString;

@interface AWEClassroomModel.ClassroomRichTextModel : MTLModel <MTLJSONSerializing> {
    void /* function */ text;
    void /* function */ color;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long size;
@property (nonatomic, copy) NSString *color;
@property (nonatomic) BOOL isBold;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
