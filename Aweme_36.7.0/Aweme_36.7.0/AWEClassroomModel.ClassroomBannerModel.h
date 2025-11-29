@class NSString, _TtC17AWEClassroomModel22ClassroomRichTextModel, NSArray;

@interface AWEClassroomModel.ClassroomBannerModel : MTLModel <MTLJSONSerializing> {
    void /* function */ idStr;
    void /* function */ schema;
    void /* function */ subTitle;
    void /* function */ label;
    void /* function */ buttonText;
}

@property (nonatomic) long long id;
@property (nonatomic, copy) NSString *idStr;
@property (nonatomic, copy) NSString *schema;
@property (nonatomic, retain) _TtC17AWEClassroomModel22ClassroomRichTextModel *title;
@property (nonatomic, copy) NSArray *subTitle;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *buttonText;

+ (id)subTitleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)titleJSONTransformer;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
