@class NSString, NSArray, AWEURLModel;

@interface IESIMGroupImpl.GroupBotModel : MTLModel <MTLJSONSerializing> {
    void /* function */ nickname;
    void /* function */ desc;
    void /* function */ tags;
}

@property (nonatomic) long long uid;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, retain) AWEURLModel *avatar;
@property (nonatomic, copy) NSArray *tags;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
