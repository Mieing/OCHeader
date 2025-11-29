@class NSString, NSMutableDictionary;

@interface WXGBackupChatInfo : NSObject

@property (copy, nonatomic) NSString *bakChatName;
@property (nonatomic) unsigned long long msgCount;
@property (nonatomic) unsigned long long mediaCount;
@property (nonatomic) unsigned long long mediaSize;
@property (nonatomic) unsigned long long filterMediaSize;
@property (nonatomic) unsigned long long filterMediaCount;
@property (retain, nonatomic) NSMutableDictionary *mediaCntInfo;
@property (retain, nonatomic) NSMutableDictionary *filterMediaCntInfo;

- (id)init;
- (void).cxx_destruct;

@end
