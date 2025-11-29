@class NSString;

@interface IESLiveEnvironmentIMP : NSObject <IESLiveEnvironment>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)currentTarget;

@end
