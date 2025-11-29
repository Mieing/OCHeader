@class NSString, NSData, SugResult_SugItem_TagInfo;

@interface SugResult_SugItem : WXPBGeneratedMessage <MMListDiffable>

@property (retain, nonatomic) NSString *word;
@property (retain, nonatomic) NSString *docId;
@property (retain, nonatomic) NSData *debugInfo;
@property (retain, nonatomic) NSString *cacheJsonResult;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSData *jumpUrl;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSString *wordHighlight;
@property (retain, nonatomic) SugResult_SugItem_TagInfo *tagInfo;

+ (void)initialize;

- (id)diffIdentifier;

@end
