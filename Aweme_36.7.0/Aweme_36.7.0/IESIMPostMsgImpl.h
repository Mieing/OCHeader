@class NSString;

@interface IESIMPostMsgImpl : NSObject <IESIMPostMessageInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)p_isSelfSeenMessage:(id)a0;
- (BOOL)isSupportPostMessage:(id)a0;
- (BOOL)isSupportShowReferenceContentMessage:(id)a0;
- (id)degradeMessageDescribWithMessage:(id)a0;
- (id)degradeMessageRefDescribWithMessage:(id)a0;
- (BOOL)isSupportPostMessage:(id)a0 conversation:(id)a1;
- (id)degradeExternalRefContentWithContentType:(long long)a0;
- (id)p_textDescribeWithMessageType:(long long)a0 aweType:(long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
