@class NSString, NSMutableSet;

@interface AWEIMFansVideoManager : NSObject <AWEUserMessage, AWEIMFansVideoManagerProtocol>

@property (retain, nonatomic) NSMutableSet *dislikeUserSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)clearUserSet;
- (void)fansVideoDislikeSetRemoveUser:(id)a0;
- (void)fansVideoSetHasDislikeUser:(id)a0;
- (BOOL)hasDislikeUser:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
