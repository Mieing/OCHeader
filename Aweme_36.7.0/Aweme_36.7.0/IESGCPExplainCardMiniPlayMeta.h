@class NSString, GPBInt64Array;

@interface IESGCPExplainCardMiniPlayMeta : NSObject

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) GPBInt64Array *supportLiveSceneArray;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) int gameType;
@property (copy, nonatomic) NSString *developer;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *playIntroduce;

- (void).cxx_destruct;

@end
