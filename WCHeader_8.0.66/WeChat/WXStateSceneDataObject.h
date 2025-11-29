@class NSString, WXStateJumpInfo;

@interface WXStateSceneDataObject : WXSceneDataObject

@property (copy, nonatomic) NSString *stateId;
@property (copy, nonatomic) NSString *stateTitle;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) unsigned long long jumpType;
@property (retain, nonatomic) WXStateJumpInfo *stateJumpDataInfo;

+ (id)object;

- (void).cxx_destruct;

@end
