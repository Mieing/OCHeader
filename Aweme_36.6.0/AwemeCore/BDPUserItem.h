@class NSString;

@interface BDPUserItem : NSObject

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL hasFollowed;
@property (copy, nonatomic) NSString *avatar;
@property (nonatomic) long long verifyType;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
