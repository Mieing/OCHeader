@class NSMutableArray, BaseResponse;

@interface StoryOpResponse : WXPBGeneratedMessage {
    int opRetListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int opRespCount;
@property (retain, nonatomic) NSMutableArray *opRetList;

+ (void)initialize;

@end
