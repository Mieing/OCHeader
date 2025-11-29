@class NSString, NSMutableDictionary;

@interface WCFinderJumpInfoAsyncLoadManager : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *_records;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)fetchJumpInfoStylesWithDataItem:(id)a0 jumpInfo:(id)a1 asyncLoadInfoScene:(int)a2 commentScene:(int)a3 config:(id)a4 successHandler:(id /* block */)a5 failureHandler:(id /* block */)a6;
- (id)stylesIdentifierForStyles:(id)a0;
- (void)notifyDidFetchJumpInfoStylesWithRecord:(id)a0 updated:(BOOL)a1;
- (id)recordForTid:(id)a0;
- (id)getOrCreateRecordForTid:(id)a0;
- (void)resetRecordForTid:(id)a0;
- (void).cxx_destruct;

@end
