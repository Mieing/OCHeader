@class NSString;

@interface AWELiveSecurityServiceIMP : NSObject <IESLiveSecurityService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getFrameSignInfoWithFrameType:(long long)a0 index:(long long)a1 extra:(id)a2;

@end
