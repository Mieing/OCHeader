@class NSString, _TtC17AWEClassroomModel29ClassroomServiceEntranceExtra, NSDictionary;

@interface AWEClassroomModel.ClassroomServiceEntranceModel : MTLModel <MTLJSONSerializing> {
    void /* function */ title;
    void /* function */ schema;
    void /* function */ iconUrl;
    void /* function */ serviceType;
    void /* function */ logExtraMap;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long badgeNumber;
@property (nonatomic, copy) NSString *schema;
@property (nonatomic, copy) NSString *iconUrl;
@property (nonatomic) long long schemaType;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, retain) _TtC17AWEClassroomModel29ClassroomServiceEntranceExtra *extra;
@property (nonatomic, copy) NSDictionary *logExtraMap;

+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
