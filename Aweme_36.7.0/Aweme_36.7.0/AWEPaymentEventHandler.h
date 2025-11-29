@class NSString, AWEAwemeModel;
@protocol AWEPaymentEventHandlerDelegate;

@interface AWEPaymentEventHandler : NSObject <AWEPaymentEventHandlerProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<AWEPaymentEventHandlerDelegate> delegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL receiveAllEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentPlayProgress;
- (id)arrayToJsonString:(id)a0;
- (void)handlePayEvent:(id)a0;
- (void)handleLoginEvent:(id)a0;
- (void)refreshMixFeedDataForMixID:(id)a0;
- (BOOL)shouldForbidFixingContinuePlayIssues;
- (BOOL)shouldRespondsToEvent:(unsigned long long)a0 responseModel:(id)a1;
- (void)handleEvent:(unsigned long long)a0 responseModel:(id)a1;
- (void)refreshPlayletFeedDataForPlayletID:(id)a0 targetEpisode:(long long)a1;
- (void)refreshLongVideoFeedDataWithModel:(id)a0 itemID:(id)a1;
- (void)refreshCurrentAweme:(id)a0 uploadTrack:(BOOL)a1 isIgnore302Error:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)handlerIdentifier;

@end
