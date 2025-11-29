@class NSString;

@interface AWEPaidStreamTrackTool : NSObject <AWEPaidStreamTrackProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonParamsWithAuthItem:(id)a0 authConfig:(id)a1 extraInfo:(id)a2;
+ (void)monitorWithEventName:(id)a0 parameters:(id)a1;
+ (id)stringForPaidScene:(long long)a0;


@end
