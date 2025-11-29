@class NSMutableArray, BaseResponse;

@interface GetAllTagsResponse : WXPBGeneratedMessage {
    int tagIdListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *tagIdList;
@property (nonatomic) unsigned int version;

+ (void)initialize;

@end
