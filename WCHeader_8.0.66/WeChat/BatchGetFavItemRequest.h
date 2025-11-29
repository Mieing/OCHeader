@class BaseRequest, NSMutableArray;

@interface BatchGetFavItemRequest : WXPBGeneratedMessage {
    int favIdListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *favIdList;

+ (void)initialize;

@end
