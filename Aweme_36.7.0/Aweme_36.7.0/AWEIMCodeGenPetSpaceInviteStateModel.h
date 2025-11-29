@class NSArray;

@interface AWEIMCodeGenPetSpaceInviteStateModel : AWEBaseDataModel

@property (nonatomic) long long invUid;
@property (copy, nonatomic) NSArray *accUidSArray;
@property (nonatomic) long long cardId;
@property (nonatomic) long long invT;
@property (nonatomic) long long estT;
@property (nonatomic) long long status;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
