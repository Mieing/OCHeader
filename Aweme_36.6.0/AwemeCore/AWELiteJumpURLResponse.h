@class NSNumber, NSString, AWELiteResponseData;

@interface AWELiteJumpURLResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *errNO;
@property (copy, nonatomic) NSString *errTips;
@property (retain, nonatomic) AWELiteResponseData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
