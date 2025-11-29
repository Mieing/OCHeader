@class NSMutableDictionary;

@interface AWEIMMessageResponseB2CTrackerParamsCache : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSMutableDictionary *params;

+ (id)sharedInstance;

- (id)paramsForMessageID:(id)a0 conversationID:(id)a1;
- (void)addTrackBlock:(id /* block */)a0;
- (void)setParams:(id)a0 messageID:(id)a1 conversationID:(id)a2;
- (id)prepareParamsForMessageID:(id)a0 conversationID:(id)a1;
- (id)messageExtParamsForMessageID:(id)a0 conversationID:(id)a1;
- (void).cxx_destruct;

@end
