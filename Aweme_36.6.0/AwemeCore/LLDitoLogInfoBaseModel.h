@class NSString, NSDictionary;

@interface LLDitoLogInfoBaseModel : NSObject <LLDitoLogInfoProtocol>

@property (copy, nonatomic) NSString *logDescription;
@property (copy, nonatomic) NSDictionary *logParams;
@property (nonatomic) unsigned long long level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
