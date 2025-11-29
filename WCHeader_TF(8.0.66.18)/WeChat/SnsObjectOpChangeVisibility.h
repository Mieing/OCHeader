@class NSMutableArray;

@interface SnsObjectOpChangeVisibility : WXPBGeneratedMessage {
    int blackContactTagIdListMemoizedSerializedSize;
    int groupContactTagIdListMemoizedSerializedSize;
}

@property (nonatomic) unsigned int blackListCount;
@property (retain, nonatomic) NSMutableArray *blackList;
@property (nonatomic) unsigned int blackContactTagIdListCount;
@property (retain, nonatomic) NSMutableArray *blackContactTagIdList;
@property (nonatomic) unsigned int groupUserCount;
@property (retain, nonatomic) NSMutableArray *groupUser;
@property (nonatomic) unsigned int groupContactTagIdListCount;
@property (retain, nonatomic) NSMutableArray *groupContactTagIdList;
@property (nonatomic) unsigned int opType;

+ (void)initialize;

@end
