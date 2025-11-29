@class NSString;

@interface IESLiveKTVFastStartKtvVideoModel : IESLiveWebcastBaseModel

@property (nonatomic) long long scene;
@property (nonatomic) long long ktvType;
@property (copy, nonatomic) NSString *liveType;
@property (nonatomic) long long uilayout;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *liveScene;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
