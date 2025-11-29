@class NSString;

@interface AWEAdItemContentLikeEggModel : AWEAdItemLikeEggModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *likeEggBottomDescColor;
@property (nonatomic) long long likeEggBottomDescPosition;
@property (copy, nonatomic) NSString *likeEggBottomDesc;
@property (copy, nonatomic) NSString *likeEggTopDescColor;
@property (nonatomic) long long likeEggTopDescPosition;
@property (copy, nonatomic) NSString *likeEggTopDesc;
@property (nonatomic) BOOL needAppendUserName;
@property (nonatomic) BOOL hasBottomEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
