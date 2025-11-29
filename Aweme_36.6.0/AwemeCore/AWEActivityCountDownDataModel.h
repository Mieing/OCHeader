@class NSString, NSDictionary;

@interface AWEActivityCountDownDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long totalTime;
@property (retain, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *taskReportPath;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
