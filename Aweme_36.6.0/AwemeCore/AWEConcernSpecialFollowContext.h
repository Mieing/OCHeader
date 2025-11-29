@class NSString, NSDictionary;

@interface AWEConcernSpecialFollowContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long entrancePosition;
@property (nonatomic) BOOL showSpecialFollowSuccessToast;
@property (nonatomic) BOOL ignoreTrack;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (readonly, nonatomic) unsigned long long followPanelPosition;

- (id)initWithShowSuccessToast:(BOOL)a0 enterFrom:(id)a1 entrancePosition:(unsigned long long)a2 followPanelPosition:(unsigned long long)a3;
- (void).cxx_destruct;

@end
