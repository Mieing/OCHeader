@class NSString, NSMutableArray, NSData;

@interface FinderSearchFeedStream : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tabTitle;
@property (nonatomic) unsigned int tabId;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) unsigned int tabInlineSearchScene;

+ (void)initialize;

@end
