@class NSDictionary, NSString;

@interface AWEKefuRTCMessage : AWEBaseBizConfigModel

@property (retain, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) NSString *msgType;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
