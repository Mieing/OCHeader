@class NSString, AWESearchAIGCCmdModel, NSMutableArray;

@interface AWESearchAIGCCacheCmdModel : NSObject

@property (copy, nonatomic) NSString *doubleVideoParentId;
@property (nonatomic) BOOL shown;
@property (nonatomic) long long cmdWaitCount;
@property (retain, nonatomic) AWESearchAIGCCmdModel *replaceDoubleVideoCmd;
@property (retain, nonatomic) AWESearchAIGCCmdModel *loadMoreCmd;
@property (retain, nonatomic) NSMutableArray *doubleVideoCmdArray;

- (void).cxx_destruct;

@end
