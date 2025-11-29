@class NSString;

@interface AWEMusicStreamingImpl.LunaActivityFreeVip : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ startDate;
    void /* function */ endDate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appliedCount;
    void /* function */ latestApplyDate;
}

@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic) long long appliedCount;
@property (nonatomic, copy) NSString *latestApplyDate;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
