@class NSString;

@interface IESLiveSoloKTVFastStartModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *sourceParams;
@property (copy, nonatomic) NSString *topSongId;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
