@class StorySyncMsgDetail;

@interface StorySyncMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) StorySyncMsgDetail *syncMsgDetail;
@property (retain, nonatomic) StorySyncMsgDetail *referSyncMsgDetail;

+ (void)initialize;

@end
