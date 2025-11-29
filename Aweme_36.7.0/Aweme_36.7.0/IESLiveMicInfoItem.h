@class NSString, HTSLiveUser;

@interface IESLiveMicInfoItem : NSObject

@property (copy, nonatomic) NSString *idStr;
@property (nonatomic) long long currentRoundMicCount;
@property (nonatomic) long long goldenMicCount;
@property (nonatomic) BOOL isSinging;
@property (retain, nonatomic) HTSLiveUser *titleSponsor;

- (void).cxx_destruct;

@end
