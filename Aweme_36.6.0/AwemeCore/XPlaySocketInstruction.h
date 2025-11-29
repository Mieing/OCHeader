@class NSString, NSDictionary;
@protocol XPlaySocketInstructionCommonParam, XPlaySocketInstruction;

@interface XPlaySocketInstruction : NSObject <BDModelCustom, XPlaySocketInstruction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *inst;
@property (copy, nonatomic) id<XPlaySocketInstructionCommonParam> comm_param;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) id<XPlaySocketInstruction> resp;
@property (nonatomic) int service;
@property (nonatomic) int method;
@property (copy, nonatomic) NSString *seq;
@property (retain, nonatomic) NSDictionary *local_extra;

+ (id)modelPropertyBlacklist;

- (id)ackInstruction;
- (id)payload;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContent:(id)a0;
- (id)payloadData;

@end
