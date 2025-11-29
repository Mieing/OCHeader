@class NSString;

@interface TingFunctionStartInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tingFunctionSessionId;
@property (retain, nonatomic) NSString *sourceBizId;
@property (nonatomic) unsigned int controlType;
@property (retain, nonatomic) NSString *lineTitle;
@property (nonatomic) unsigned int lineLoc;
@property (retain, nonatomic) NSString *itemTitle;
@property (nonatomic) unsigned int itemLoc;
@property (retain, nonatomic) NSString *itemCoverUrl;
@property (retain, nonatomic) NSString *itemRequestId;
@property (nonatomic) unsigned int listenIdItemType;
@property (retain, nonatomic) NSString *controllerSessionBuffer;

+ (void)initialize;

@end
