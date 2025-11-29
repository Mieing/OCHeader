@class NSString;

@interface AWEIMShareAndForwardToChatImplFactory : NSObject <IESIMShareAndForwardToChatImplFactoryInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)shareImplOfForwardMessage:(id)a0;
- (id)shareImplOfGroupCommand;
- (id)shareImplOfShareContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
