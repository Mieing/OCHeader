@class NSString, NSArray;

@interface AWEExtensionIMPushDataStorage : AWEExtensionStorage

@property (nonatomic) BOOL containIMPush;
@property (copy, nonatomic) NSString *currentUserID;
@property (copy, nonatomic) NSArray *imPushSettings;
@property (nonatomic) BOOL enableGetImPushTest;

+ (id)sharedIMPushDataStorage;

- (id)im_containIMPushKey;
- (id)im_currentUserIDKey;
- (id)im_pushSettings;
- (id)im_enablePushTest;
- (id)im_convReadIndexDictWithSecUID:(id)a0;
- (id)p_trimReadIndexDict:(id)a0 limitCount:(int)a1;
- (void)recordReadIndexOfConvID:(id)a0 readIndex:(long long)a1 secUserID:(id)a2 limitCount:(int)a3;
- (long long)readIndexOfConvID:(id)a0 secUserID:(id)a1;

@end
