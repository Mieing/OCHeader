@class NSString, NSNumber, NSDictionary;

@interface ACCAIGCBusinessEventModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *aigcMediaEnum;
@property (retain, nonatomic) NSNumber *uploadMediaCnt;
@property (retain, nonatomic) NSNumber *uploadVideoMediaCnt;
@property (retain, nonatomic) NSNumber *picCnt;
@property (retain, nonatomic) NSNumber *videoCnt;
@property (retain, nonatomic) NSNumber *musicCnt;
@property (copy, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSNumber *isAsync;
@property (nonatomic) unsigned long long requestCount;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
