@class NSString;

@interface WCAdFinderLiveNoticeInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *finderLiveNoticeId;
@property (retain, nonatomic) NSString *finderAvatar;
@property (retain, nonatomic) NSString *finderNickname;
@property (retain, nonatomic) NSString *finderLiveTitle;
@property (retain, nonatomic) NSString *finderLiveDesc;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
