@class NSString, NSDictionary;

@interface EcsBaseJsAPIEventDefault : NSObject <EcsBaseJsAPIEvent> {
    NSString *_eventAction;
    NSDictionary *_eventParam;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
