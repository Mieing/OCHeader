@class NSNumber;

@interface IESLiveGuideForbiddenModel : NSObject

@property (readonly, nonatomic) long long banDuration;
@property (readonly, nonatomic) BOOL isForever;
@property (readonly, nonatomic) NSNumber *lastBanLogID;
@property (readonly, nonatomic) long long banTime;
@property (readonly, nonatomic) long long timestamp;

- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
