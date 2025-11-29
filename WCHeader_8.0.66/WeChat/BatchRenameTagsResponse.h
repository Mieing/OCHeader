@class NSMutableArray, BaseResponse;

@interface BatchRenameTagsResponse : WXPBGeneratedMessage {
    int retListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *retList;
@property (retain, nonatomic) NSMutableArray *newFavTagList;

+ (void)initialize;

@end
