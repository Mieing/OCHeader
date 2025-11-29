@class NSDictionary, NSString;

@interface IESLiveMultiAudioQuickStartModel : IESLiveDynamicModel

@property (nonatomic) unsigned long long subscene;
@property (retain, nonatomic) id responseOfInit;
@property (nonatomic) BOOL openBySchema;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *enterFrom;

- (void).cxx_destruct;

@end
