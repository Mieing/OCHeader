@class NSString;

@interface MMFinderLiveLikeUserInfo : NSObject

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headUrl;
@property (nonatomic) unsigned int liveIdentity;

+ (id)createLikeUserInfo:(id)a0;

- (void).cxx_destruct;

@end
