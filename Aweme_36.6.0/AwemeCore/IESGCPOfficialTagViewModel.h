@class NSString;

@interface IESGCPOfficialTagViewModel : NSObject

@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *tagArrowImageName;
@property (nonatomic) unsigned long long promoteScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *officialUserId;
@property (copy, nonatomic) NSString *officialSecUserId;

- (BOOL)isVaildParams;
- (void).cxx_destruct;

@end
