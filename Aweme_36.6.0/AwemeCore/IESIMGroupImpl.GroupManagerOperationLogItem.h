@class NSString, NSArray, AWEURLModel;

@interface IESIMGroupImpl.GroupManagerOperationLogItem : MTLModel <MTLJSONSerializing> {
    void /* function */ uid;
    void /* function */ secUid;
    void /* function */ nickname;
    void /* function */ createTimeDescription;
    void /* function */ operation;
    void /* function */ textTemplates;
}

@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *secUid;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, retain) AWEURLModel *avatar;
@property (nonatomic, copy) NSString *createTimeDescription;
@property (nonatomic) double createTime;
@property (nonatomic) long long roleTagType;
@property (nonatomic, copy) NSString *operation;
@property (nonatomic, copy) NSArray *textTemplates;

+ (id)avatarJSONTransformer;
+ (id)textTemplatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
