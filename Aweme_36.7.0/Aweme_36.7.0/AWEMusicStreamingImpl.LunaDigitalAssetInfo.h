@class NSString;

@interface AWEMusicStreamingImpl.LunaDigitalAssetInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ itemID;
}

@property (nonatomic) long long itemType;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic) long long amount;
@property (nonatomic) long long onlineDate;
@property (nonatomic) long long countPurch;
@property (nonatomic) long long salePeriod;
@property (nonatomic) long long purchCountLimit;
@property (nonatomic, readonly) BOOL isOnSale;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithCoder:(id)a0;

@end
