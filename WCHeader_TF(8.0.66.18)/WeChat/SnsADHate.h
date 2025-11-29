@class SKBuiltinString_t, NSMutableArray;

@interface SnsADHate : WXPBGeneratedMessage {
    int dislikeReasonIdListMemoizedSerializedSize;
}

@property (retain, nonatomic) SKBuiltinString_t *snsAduxInfo;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) SKBuiltinString_t *snsStatExt;
@property (nonatomic) unsigned int dislikeReasonId;
@property (nonatomic) unsigned int dislikeReasonIdCount;
@property (retain, nonatomic) NSMutableArray *dislikeReasonIdList;

+ (void)initialize;

@end
