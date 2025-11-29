@class BaseRequest, NSMutableArray;

@interface BatchDelTagsRequest : WXPBGeneratedMessage {
    int tagIdListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *tagIdList;

+ (void)initialize;

@end
