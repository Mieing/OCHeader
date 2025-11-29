@class NSString;

@interface WAAppTaskJumpInfo : NSObject

@property (retain, nonatomic) NSString *sourceAppID;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) NSString *agentId;

- (id)description;
- (void).cxx_destruct;

@end
