@class NSString, NSArray;

@interface __AWEIMRTVSelectGroupMembersConfiguration : NSObject <AWEIMRTVSelectGroupMembersConfiguration>

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long rtvType;
@property (copy, nonatomic) NSArray *defaultSelectedUserIMIDs;
@property (copy, nonatomic) NSString *customTitle;
@property (nonatomic) BOOL disableAutoSelectOnlineUser;
@property (copy, nonatomic) NSArray *preferSelectedUserIMIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
