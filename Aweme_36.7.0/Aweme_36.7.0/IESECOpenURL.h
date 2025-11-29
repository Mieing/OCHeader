@class NSString;

@interface IESECOpenURL : NSObject <IESECOpenURLService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)realImpl;
+ (id)forwardingTargetForSelector:(SEL)a0;


@end
