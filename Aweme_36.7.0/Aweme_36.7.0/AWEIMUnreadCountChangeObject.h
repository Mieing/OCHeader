@class NSString;
@protocol AWEIMUnreadCountChangeDelegate;

@interface AWEIMUnreadCountChangeObject : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *storageKey;
@property (nonatomic) long long markReadCount;
@property (nonatomic) long long currentUnreadCount;
@property (weak, nonatomic) id<AWEIMUnreadCountChangeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)tryToMarkRead;
- (void)loadMarkRead;
- (void)p_markAsRead;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)dealloc;

@end
