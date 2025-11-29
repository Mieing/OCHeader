@class NSString;

@interface AWEProgressCommonStatusAdapter : NSObject <AWEProgressStatusAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)progressStatusWithCurrentStatus:(id)a0 formerStatus:(id)a1 action:(unsigned long long)a2 isImmersionMode:(BOOL)a3 context:(id)a4;

@end
