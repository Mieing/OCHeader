@class NSString, NSDictionary;

@interface PTYRequestConfig : NSObject <IESLiveRequestConfig, BDPClientAIRequestConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL download;
@property (copy, nonatomic) NSDictionary *filters;

- (void).cxx_destruct;
- (id)init;

@end
