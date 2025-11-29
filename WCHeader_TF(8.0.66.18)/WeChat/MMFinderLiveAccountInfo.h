@class NSString;

@interface MMFinderLiveAccountInfo : NSObject

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *headImgUrl;
@property (nonatomic) unsigned int roleType;
@property (nonatomic) BOOL isReName;
@property (readonly, nonatomic) NSString *roleName;
@property (readonly, nonatomic) NSString *roleWording;

+ (id)tranferToLiveAccountInfo:(id)a0;
+ (void)reName:(id)a0 forAccountInfos:(id)a1;
+ (id)getDigestLogWithLiveAccountInfoList:(id)a0;

- (id)initWithLiveAliasInfo:(id)a0;
- (void)copyFromLiveAliasInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
