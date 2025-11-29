@class NSString;

@interface IESIMCombineShareImpl : NSObject <IESIMCombineShareInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)isSupportCombineShareWithMessage:(id)a0;
- (id)degradeMessageDescribWithMessageType:(long long)a0 aweType:(long long)a1;
- (id)convertToIMMessageForHint:(id)a0;
- (id)degradeMessageWithSubMessage:(id)a0;
- (id)degradeMessageDescribWithContentMessage:(id)a0 messageType:(long long)a1 aweType:(long long)a2;
- (BOOL)isSupportShowReferenceContentInCombineShare:(long long)a0 aweType:(long long)a1;
- (Class)combineMessageListViewControllerClass;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
