@class BaseRequest, NSMutableArray;

@interface BatchDelFavItemRequest : WXPBGeneratedMessage {
    int favIdListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *favIdList;
@property (nonatomic) unsigned int ctxCount;
@property (retain, nonatomic) NSMutableArray *ctxList;

+ (void)initialize;

@end
