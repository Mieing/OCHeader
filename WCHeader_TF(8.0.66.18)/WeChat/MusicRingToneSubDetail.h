@class NSString;

@interface MusicRingToneSubDetail : AbstractRingToneSubDetail

@property (nonatomic) unsigned int sid;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long sourceType;

- (id)initFromPb:(id)a0;
- (void).cxx_destruct;

@end
