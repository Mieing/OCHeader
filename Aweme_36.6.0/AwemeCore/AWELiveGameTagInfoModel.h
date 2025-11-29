@class NSString;

@interface AWELiveGameTagInfoModel : AWEBaseApiModel

@property (nonatomic) long long isGame;
@property (nonatomic) long long gameTagId;
@property (copy, nonatomic) NSString *gameTagName;

- (void).cxx_destruct;

@end
