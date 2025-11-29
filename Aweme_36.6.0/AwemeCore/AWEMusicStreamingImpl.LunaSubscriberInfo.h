@class NSString;

@interface AWEMusicStreamingImpl.LunaSubscriberInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ expireDate;
}

@property (nonatomic, copy) NSString *expireDate;
@property (nonatomic) BOOL isSubscriber;

+ (id)JSONKeyPathsByPropertyKey;

- (id)jsonObjectDic;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
