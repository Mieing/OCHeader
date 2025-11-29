@class NSArray, NSString;
@protocol IESLiveLiteGiftStructProtocol;

@interface IESLiveGiftFusionPlayerAdapterContext : NSObject <IESLiveGiftFusionPlayerAdapterContextProtocol>

@property (retain, nonatomic) id<IESLiveLiteGiftStructProtocol> gift;
@property (copy, nonatomic) NSArray *toUserIDs;
@property (copy, nonatomic) NSString *fromUserID;
@property (nonatomic) BOOL isSendBySelf;
@property (copy, nonatomic) NSString *comboKey;
@property (copy, nonatomic) id /* block */ sendEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessage:(id)a0 params:(id)a1;
- (id)initWithGift:(id)a0 fromUserID:(id)a1 toUserIDs:(id)a2 isSendBySelf:(BOOL)a3 comboKey:(id)a4;
- (void).cxx_destruct;

@end
