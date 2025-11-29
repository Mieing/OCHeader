@class NSMutableDictionary, NSDictionary, NSURL, NSString, NSMutableArray;

@interface QBWebItem : NSObject

@property (retain, nonatomic) NSDictionary *MIMEMap;
@property (nonatomic) double beginLoadingTimestamp;
@property (nonatomic) double finishLoadingTimestamp;
@property (retain, nonatomic) NSMutableDictionary *itemInfo;
@property (nonatomic) BOOL isCanInitEventHasAdded;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSMutableArray *eventArray;
@property (retain, nonatomic) NSString *HTTPMethod;
@property (nonatomic) long long itemType;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic) long long directType;
@property (nonatomic) int apnType;
@property (retain, nonatomic) NSString *MIMEType;
@property (nonatomic) unsigned long long dataLength;

+ (id)itemWithURL:(id)a0;

- (long long)itemTypeWithFileExtension:(id)a0;
- (long long)itemTypeWithMIME:(id)a0;
- (void)parseItemTypeWithEvent:(id)a0;
- (id)init;
- (void)addEvent:(id)a0;
- (void)addItemInfoWithKey:(id)a0 value:(id)a1 allowDuplicateKey:(BOOL)a2;
- (id)JSONInfo;
- (id)itemTypeDescription;
- (id)networkDescriptionWithAPN:(int)a0;
- (id)commonInfo;
- (void).cxx_destruct;

@end
