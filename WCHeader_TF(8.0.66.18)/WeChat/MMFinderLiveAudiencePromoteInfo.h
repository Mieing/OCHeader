@class NSData, FinderLiveShopWindowAdItem, FinderJumpInfo;

@interface MMFinderLiveAudiencePromoteInfo : NSObject

@property (nonatomic) unsigned long long promoteId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSData *reportExtBuffer;
@property (retain, nonatomic) FinderLiveShopWindowAdItem *adItem;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

+ (id)createLiveAudiencePromoteInfoFrom:(id)a0;

- (void).cxx_destruct;

@end
