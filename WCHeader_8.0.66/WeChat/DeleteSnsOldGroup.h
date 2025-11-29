@class NSMutableArray;

@interface DeleteSnsOldGroup : WXPBGeneratedMessage {
    int groupIdsMemoizedSerializedSize;
}

@property (nonatomic) unsigned int groupCount;
@property (retain, nonatomic) NSMutableArray *groupIds;

+ (void)initialize;

@end
