@class NSMutableArray, NSMutableDictionary;
@protocol GCMultiMessageViewModelDelegate;

@interface GCMultiMessageViewModelConfig : NSObject

@property (retain, nonatomic) NSMutableArray *msgViewModelConfig;
@property (nonatomic) long long defaultChannelId;
@property (nonatomic) BOOL isRealTimeHotChat;
@property (weak, nonatomic) id<GCMultiMessageViewModelDelegate> multiMessageViewModelDelegate;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;

- (void).cxx_destruct;

@end
