@class NSString, WCFinderContact;

@interface MMFinderLiveConnectMicPkUser : NSObject <NSCopying>

@property (nonatomic) BOOL isAccept;
@property (retain, nonatomic) NSString *sdkUserId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) unsigned int winningStreakCount;
@property (retain, nonatomic) NSString *boardKey;
@property (nonatomic) unsigned int boardType;
@property (nonatomic) BOOL isApplicant;
@property (nonatomic) unsigned long long genericScore;
@property (nonatomic) unsigned int seatId;
@property (readonly, nonatomic) BOOL isEmptyUser;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
