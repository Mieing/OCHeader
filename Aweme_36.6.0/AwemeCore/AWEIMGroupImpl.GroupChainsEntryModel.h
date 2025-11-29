@class NSString;

@interface AWEIMGroupImpl.GroupChainsEntryModel : MTLModel <MTLJSONSerializing> {
    void /* function */ entryId;
    void /* function */ entryCreateUid;
    void /* function */ entryText;
}

@property (nonatomic, copy) NSString *entryId;
@property (nonatomic, copy) NSString *entryCreateUid;
@property (nonatomic, copy) NSString *entryText;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
