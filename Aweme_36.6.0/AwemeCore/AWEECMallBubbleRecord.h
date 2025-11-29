@class NSString, NSArray;

@interface AWEECMallBubbleRecord : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *typeStr;
@property (nonatomic) long long msgType;
@property (nonatomic) long long msgSubType;
@property (copy, nonatomic) NSString *msgUniqId;
@property (nonatomic) double msgShowTime;
@property (nonatomic) long long todayShowCount;
@property (nonatomic) long long totalShowCount;
@property (copy, nonatomic) NSArray *last30DaysRecordArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)last30DaysRecordArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
