@class WCFinderContact, FinderLiveNoticeInfo;

@interface WCFinderLiveStreamNoticeCard : NSObject

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) WCFinderContact *contact;

+ (id)finderLiveStreamNoticeCardFrom:(id)a0;

- (id)toFinderLiveStreamNoticeCard;
- (void).cxx_destruct;

@end
