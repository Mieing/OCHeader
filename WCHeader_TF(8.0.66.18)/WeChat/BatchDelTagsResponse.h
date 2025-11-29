@class NSMutableArray, BaseResponse;

@interface BatchDelTagsResponse : WXPBGeneratedMessage {
    int retListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *retList;

+ (void)initialize;

@end
