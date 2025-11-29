@class NSString, _TtC13IESECBuySwift9LogPbData, _TtC13IESECBuySwift13PayStatusInfo;

@interface IESECBuySwift.PayStatusResponse : MTLModel <MTLJSONSerializing> {
    void /* function */ message;
}

@property (nonatomic) long long statusCode;
@property (nonatomic) long long st;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) _TtC13IESECBuySwift13PayStatusInfo *data;
@property (nonatomic, retain) _TtC13IESECBuySwift9LogPbData *logPb;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isSuccess;
- (id)initWithCoder:(id)a0;

@end
