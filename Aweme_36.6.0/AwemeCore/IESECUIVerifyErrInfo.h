@class NSString;

@interface IESECUIVerifyErrInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *btmID;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *exceptText;
@property (copy, nonatomic) NSString *resultText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
