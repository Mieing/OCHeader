@class NSString, NSDictionary, NSArray, AWEIMChatModel;

@interface AWEIMPushViewModel : NSObject

@property (retain, nonatomic) AWEIMChatModel *chat;
@property (nonatomic) BOOL isAggregation;
@property (nonatomic) long long config;
@property (nonatomic) unsigned long long aggregateType;
@property (nonatomic) BOOL hideDetailMsg;
@property (nonatomic) BOOL needVibrate;
@property (nonatomic) BOOL hidePrivateLetterIcon;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSDictionary *traceContext;
@property (copy, nonatomic) NSString *businessType;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSArray *metaInfo;

- (id)pushControlModel;
- (id)p_mixImagePushControlModel;
- (id)p_strangerPushControlModel;
- (id)p_defaultPushControlModel;
- (void).cxx_destruct;

@end
