@class NSString, NSData, FinderCommonReddotSyncRequest;

@interface FinderCommonReddotSyncTask : NSObject

@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int syncScene;
@property (nonatomic) unsigned int locationAuthScene;
@property (retain, nonatomic) NSData *reliableNotifyBuff;
@property (retain, nonatomic) NSString *contextId;
@property (retain, nonatomic) FinderCommonReddotSyncRequest *request;

- (void).cxx_destruct;

@end
