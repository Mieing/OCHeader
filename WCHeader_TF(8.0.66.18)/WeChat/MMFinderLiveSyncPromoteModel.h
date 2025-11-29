@class NSData, NSArray, MMFinderLiveAudiencePromoteInfo;

@interface MMFinderLiveSyncPromoteModel : NSObject

@property (nonatomic) BOOL needReplace;
@property (retain, nonatomic) NSData *syncContext;
@property (retain, nonatomic) NSArray *promoteInfoList;
@property (retain, nonatomic) MMFinderLiveAudiencePromoteInfo *promoteInfo;

+ (id)getLiveSyncPromoteModelWithPromoteInfoListResp:(id)a0;
+ (id)getPromoteInfoListWithPromoteInfoListResp:(id)a0;

- (void).cxx_destruct;

@end
