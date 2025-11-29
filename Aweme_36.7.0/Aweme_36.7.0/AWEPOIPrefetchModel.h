@class NSString, NSDictionary;

@interface AWEPOIPrefetchModel : NSObject <IESLLPOIPrefetchModel>

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) double cacheDuration;
@property (copy, nonatomic) NSDictionary *headerParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *requestPath;
@property (nonatomic) unsigned long long preRequestType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) double cacheDuration;
@property (copy, nonatomic) NSDictionary *headerParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *requestPath;
@property (nonatomic) unsigned long long preRequestType;

- (void).cxx_destruct;
- (id)init;

@end
