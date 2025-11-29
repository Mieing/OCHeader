@class NSArray, NSData, NSString;

@interface WeChat.WSFlowListLogic : NSObject {
    void /* unknown type, empty encoding */ listData;
    void /* unknown type, empty encoding */ lastBuffer;
    void /* unknown type, empty encoding */ enterExportId;
    void /* unknown type, empty encoding */ identifierSet;
}

@property (nonatomic, copy) NSArray *listData;
@property (nonatomic, copy) NSData *lastBuffer;
@property (nonatomic) void /* unknown type, empty encoding */ isFetching;
@property (nonatomic) void /* unknown type, empty encoding */ topHasMore;
@property (nonatomic) void /* unknown type, empty encoding */ bottomHasMore;
@property (nonatomic, copy) NSString *enterExportId;
@property (nonatomic, retain) void /* unknown type, empty encoding */ enterFinderContentVM;

- (void)requestDataWithCurrentListData:(id)a0 direction:(unsigned int)a1 scene:(unsigned int)a2 enterItemId:(id)a3 extInfo:(id)a4 completion:(id /* block */)a5;
- (void)fetchEnterFinderItemIfNeededWithCompletion:(id /* block */)a0;
- (BOOL)shouldUseEnterFinderItem;
- (void)getMockDataList;
- (id)init;
- (void).cxx_destruct;

@end
