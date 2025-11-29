@class NSString;

@interface AWEPaySwiftImpl.ChannelGuideReportResponseModel : MTLModel <MTLJSONSerializing> {
    void /* function */ retStatus;
    void /* function */ retCode;
    void /* function */ retMsg;
}

@property (nonatomic, copy) NSString *retStatus;
@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
