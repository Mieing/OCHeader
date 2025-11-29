@class NSString, NSDictionary;

@interface YataRequestDataObject : NSObject <YataRequestCallbackDataObject>

@property (copy, nonatomic) NSString *triggerType;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) id response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTrigger:(id)a0 api:(id)a1 method:(id)a2 dataFormat:(id)a3 query:(id)a4 body:(id)a5;
- (void).cxx_destruct;

@end
