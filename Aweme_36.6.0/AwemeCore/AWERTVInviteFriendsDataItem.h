@class AWEIMUser, NSString, NSURL;
@protocol AWEIMRTVConversation;

@interface AWERTVInviteFriendsDataItem : NSObject

@property (retain, nonatomic) AWEIMUser *userValue;
@property (retain, nonatomic) id<AWEIMRTVConversation> groupValue;
@property (readonly, nonatomic) BOOL isUser;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *secID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *avartarURL;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL online;
@property (nonatomic) long long lastActiveTime;
@property (copy, nonatomic) NSString *activeUserString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } matchRange;
@property (nonatomic) unsigned long long searchUserType;

- (id)aliasPinYinSearchObj;
- (id)nicknamePinYinSearchObj;
- (id)contactNamePinYinSearchObj;
- (id)fakeUserID;
- (id)initWithRTVUserProfile:(id)a0;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0;
- (id)initWithGroup:(id)a0;

@end
