@class NSString;

@interface AWEMusicStreamingImpl.LunaSettleItemInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ itemID;
}

@property (nonatomic) long long itemType;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic) long long quantity;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
