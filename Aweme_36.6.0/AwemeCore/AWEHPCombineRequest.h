@class NSString, NSDictionary;

@interface AWEHPCombineRequest : NSObject <AWEHPNetCombineRequestProtocol>

@property (copy, nonatomic) NSString *requestScene;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSDictionary *body;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
