@class NSString, MMLiveInfoItem;

@interface MMLiveMsgTipsExpandViewModel : NSObject

@property (readonly, nonatomic) unsigned long long liveId;
@property (readonly, nonatomic) NSString *roomId;
@property (readonly, nonatomic) NSString *anchor;
@property (readonly, nonatomic) NSString *anchorDisplayName;
@property (readonly, nonatomic) NSString *anchorHeadImgUrl;
@property (retain, nonatomic) MMLiveInfoItem *liveInfo;

- (id)initWithLiveInfo:(id)a0;
- (void).cxx_destruct;

@end
