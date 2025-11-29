@class NSString, NSDate;

@interface AWENewScanImpl.ScanSecureLinkResponseModel : AWEBaseApiModel {
    void /* function */ link;
    void /* function */ pageCode;
    void /* unknown type, empty encoding */ expiredDate;
}

@property (nonatomic) long long risk;
@property (nonatomic) BOOL showMidPage;
@property (nonatomic) double cachedDuration;
@property (nonatomic, copy) NSString *link;
@property (nonatomic, copy) NSString *pageCode;
@property (nonatomic, copy) NSDate *expiredDate;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
