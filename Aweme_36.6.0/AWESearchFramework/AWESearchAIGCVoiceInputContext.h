@class NSString, NSDictionary;

@interface AWESearchAIGCVoiceInputContext : NSObject

@property (copy, nonatomic) NSString *asrAppkey;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) unsigned long long inputType;
@property (retain, nonatomic) NSDictionary *voiceAsrExtra;
@property (nonatomic) BOOL isSplitVisonSearchMode;
@property (nonatomic) BOOL ignoreDarkMode;
@property (nonatomic) BOOL isPadSplitting;

- (void).cxx_destruct;

@end
