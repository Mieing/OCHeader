@class NSString, NSMutableDictionary;

@interface WXGImportChatInfo : NSObject

@property (copy, nonatomic) NSString *bakChatName;
@property (nonatomic) unsigned long long msgCount;
@property (nonatomic) unsigned long long msgListCount;
@property (nonatomic) unsigned long long msgFilterCount;
@property (nonatomic) unsigned long long msgSpecialCount;
@property (nonatomic) unsigned long long msgLocalExistCount;
@property (nonatomic) unsigned int msgMaxTime;
@property (nonatomic) unsigned int msgMinTime;
@property (nonatomic) unsigned int mediaCount;
@property (retain, nonatomic) NSMutableDictionary *mediaCntInfo;

- (id)init;
- (void)addMediaForMediaType:(unsigned int)a0;
- (id)brief;
- (void).cxx_destruct;

@end
