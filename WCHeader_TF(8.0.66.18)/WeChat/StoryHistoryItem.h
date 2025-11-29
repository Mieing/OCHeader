@class NSString, NSMutableArray, StoryObject;

@interface StoryHistoryItem : WXPBGeneratedMessage {
    int objIdListMemoizedSerializedSize;
}

@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *date;
@property (retain, nonatomic) StoryObject *storyObject;
@property (nonatomic) unsigned int storyCount;
@property (retain, nonatomic) NSMutableArray *objIdList;

+ (void)initialize;

@end
