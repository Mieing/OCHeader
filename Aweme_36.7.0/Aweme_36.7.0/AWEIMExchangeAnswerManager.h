@class NSString, NSMutableDictionary, AWEIMExchangeAnswerStrategyListConfig, NSMutableArray, AWEIMExchangeAnswerMessage;

@interface AWEIMExchangeAnswerManager : NSObject <BDXContainerLifecycleProtocol, IESIMExchangeAnswerInterface>

@property (class, readonly, nonatomic) AWEIMExchangeAnswerManager *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *configArray;
@property (retain, nonatomic) NSMutableDictionary *listConfigDict;
@property (retain, nonatomic) AWEIMExchangeAnswerStrategyListConfig *defaultConfig;
@property (retain, nonatomic) AWEIMExchangeAnswerMessage *displayingMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerWillDestory:(id)a0;
- (void)fetchDataIfNeeded;
- (void)addConfig:(id)a0;
- (void)setListConfig:(id)a0 forKey:(id)a1;
- (id)getListConfigForKey:(id)a0;
- (id)backgroundImageWithIdentifier:(id)a0;
- (BOOL)isGroupSupportExchangeAnswer:(id)a0;
- (BOOL)isForwardExchangeAnswerSupportGroupSharing:(id)a0;
- (BOOL)isExchangeMessageSupportAnswer:(id)a0;
- (BOOL)__isConSupportExchangeAnswer:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
