@class NSString, NSMutableDictionary;

@interface AWEIMSendMessageCallBackManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *callBackMaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindCallBackTarget:(id)a0 sendMessageID:(id)a1;
+ (void)callBackIfNeeded:(id)a0 error:(id)a1;
+ (id)shared;

@end
