@class NSString;

@interface AWETeenModeAlertAutoCloseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long enlargeCloseHeight;
@property (nonatomic) BOOL showCountDown;
@property (retain, nonatomic) NSString *countDownSinglePre;
@property (retain, nonatomic) NSString *countDownSingleSuf;
@property (retain, nonatomic) NSString *countDownDoublePre;
@property (retain, nonatomic) NSString *countDownDoubleSuf;
@property (nonatomic) long long countDownNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
