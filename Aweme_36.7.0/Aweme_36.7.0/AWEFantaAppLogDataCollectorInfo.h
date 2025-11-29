@class NSString, NSDictionary;

@interface AWEFantaAppLogDataCollectorInfo : NSObject <FantaDataCollectorInfo>

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
