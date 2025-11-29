@class NSString;

@interface TIMXUserProfile : NSObject <TIMXUserProfileProtocol, TIMXInstanceScopeSingleton>

@property (nonatomic) long long uid;
@property (retain, nonatomic) NSString *userNickName;
@property (retain, nonatomic) NSString *userPortrait;
@property (retain, nonatomic) NSString *basicExtInfo;
@property (retain, nonatomic) NSString *detailExtInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
