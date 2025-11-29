@class NSString;

@interface AWEMusicStreamingImpl.LunaIapPay : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ iapPayData;
}

@property (nonatomic, copy) NSString *iapPayData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
