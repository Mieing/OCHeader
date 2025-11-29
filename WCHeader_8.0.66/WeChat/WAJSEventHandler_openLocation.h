@class NSString;
@protocol IWALocationService;

@interface WAJSEventHandler_openLocation : WAJSEventHandler_BaseEvent <WALocationServiceDelegate>

@property (retain, nonatomic) id<IWALocationService> locationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
