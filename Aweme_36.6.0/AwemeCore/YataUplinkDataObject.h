@class NSString, NSDictionary;

@interface YataUplinkDataObject : NSObject <YataUplinkCallBackDataObject>

@property (copy, nonatomic) NSString *triggerType;
@property (copy, nonatomic) NSString *nodeName;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSDictionary *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
