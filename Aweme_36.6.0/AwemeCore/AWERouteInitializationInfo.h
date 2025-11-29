@class NSString, NSDictionary;

@interface AWERouteInitializationInfo : NSObject <IESLLRouteInitializationInfo>

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSDictionary *paramsDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSDictionary *paramsDictionary;

- (void).cxx_destruct;

@end
