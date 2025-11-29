@class NSString;

@interface IESECLiveContextProviderImpl : NSObject <IESECLiveContextProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playBackContext;
+ (id)widgetClassWithContext:(id)a0;
+ (id)context;


@end
