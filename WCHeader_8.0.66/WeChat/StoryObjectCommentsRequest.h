@class BaseRequest, NSString, NSMutableArray;

@interface StoryObjectCommentsRequest : WXPBGeneratedMessage {
    int objIdListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int objIdCount;
@property (retain, nonatomic) NSMutableArray *objIdList;

+ (void)initialize;

@end
