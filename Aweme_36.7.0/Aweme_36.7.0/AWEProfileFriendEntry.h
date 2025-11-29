@class NSString;

@interface AWEProfileFriendEntry : NSObject <AWEProfileFriendEntryProtocol>

@property (nonatomic) long long showMateListEntry;
@property (nonatomic) long long relationTabOrderNum;
@property (copy, nonatomic) NSString *curUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
