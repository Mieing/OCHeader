@class NSString, NSDictionary;

@interface IESGCPDataConnectionModel : NSObject <NSCoding>

@property (readonly, copy, nonatomic) NSString *actionTypeString;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) double duration;
@property (nonatomic) double durationLimit;
@property (nonatomic) BOOL isPromotionGame;
@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) unsigned long long promoteScene;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *promoterID;
@property (nonatomic) BOOL isAds;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *extra;

- (id)contextJson;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
