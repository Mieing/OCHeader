@class NSString, CContact;

@interface CaraContact : NSObject <CaraNativeContactBase>

@property (readonly, nonatomic) CContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (id)username;
- (BOOL)isPrivate;
- (BOOL)isGroup;
- (BOOL)isOpenIM;
- (BOOL)isMute;
- (BOOL)isMinimized;
- (BOOL)isSessionStickyOnTop;
- (id)getDisplayName;
- (id)zidl;
- (void).cxx_destruct;

@end
