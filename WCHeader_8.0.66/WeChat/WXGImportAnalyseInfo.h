@class NSString, NSMutableDictionary;

@interface WXGImportAnalyseInfo : NSObject

@property (nonatomic) unsigned long long totalMsgCount;
@property (nonatomic) unsigned long long totalMediaCount;
@property (nonatomic) unsigned long long totalMsgListCount;
@property (nonatomic) unsigned long long totalSessionCount;
@property (retain, nonatomic) NSMutableDictionary *totalMediaType;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *briefString;
@property (nonatomic) double costTime;
@property (retain, nonatomic) NSMutableDictionary *allChatInfo;
@property (nonatomic) unsigned long long textSize;
@property (nonatomic) unsigned long long mediaSize;

- (id)init;
- (id)brief;
- (void).cxx_destruct;

@end
