@class NSString, MMListenItem, NSMutableArray;

@interface MMListenAudioChatPlayRequest_ChatRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *chatText;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) NSString *recommendId;
@property (retain, nonatomic) NSString *asrListenId;
@property (nonatomic) int chatType;
@property (retain, nonatomic) NSMutableArray *supportedPlayControlTypes;

+ (void)initialize;

@end
