@class NSString;

@interface MMFinderLiveLikeV2MsgInfo : NSObject

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *likeNotifyWording;

+ (id)createLiveLikeV2MsgInfo:(id)a0 liveContact:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
