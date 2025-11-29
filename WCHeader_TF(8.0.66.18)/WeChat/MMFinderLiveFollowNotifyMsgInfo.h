@class NSString, FinderLiveFollowContact;

@interface MMFinderLiveFollowNotifyMsgInfo : NSObject

@property (retain, nonatomic) FinderLiveFollowContact *followContact;
@property (retain, nonatomic) NSString *followNotifyWording;

+ (id)createNotifyMsgInfoWithFollowContact:(id)a0 followInfo:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
