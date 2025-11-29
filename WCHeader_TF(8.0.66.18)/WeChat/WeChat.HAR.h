@class NSDictionary;

@interface WeChat.HAR : NSObject {
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ allEntryDict;
    void /* unknown type, empty encoding */ allEntryIndex;
}

@property (nonatomic, copy) NSDictionary *allEntryDict;
@property (nonatomic, copy) NSDictionary *allEntryIndex;
@property (nonatomic) void /* unknown type, empty encoding */ loopAllEntry;

- (BOOL)isAllUrlLooped;
- (long long)numEntries;
- (id)harToJsonDict;
- (id)harToJsonStr;
- (id)entryMatchUrlStrWithUrlStr:(id)a0;
- (id)init;
- (void)addEntryWithUrlRequest:(id)a0 urlResponse:(id)a1 responseData:(id)a2 startDate:(id)a3 webviewPtrValue:(id)a4;
- (void).cxx_destruct;

@end
