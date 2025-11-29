@class NSString;

@interface AWEBulletScreenAnchorManager : NSObject <AWEBulletScreenAnchorManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorModelWithAweme:(id)a0 priorityKey:(id)a1 needWhiteIcon:(BOOL)a2 tapAnchorBlock:(id /* block */)a3 isComment:(BOOL)a4;
+ (id)iconWithName:(id)a0 whiteIconName:(id)a1 needWhiteIcon:(BOOL)a2;
+ (id)styleIconFromModel:(id)a0;


@end
