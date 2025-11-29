@class NSString;

@interface WAAppTaskJumpWeAppOperation : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *fromAppId;
@property (retain, nonatomic) NSString *toAppId;
@property (nonatomic) unsigned long long jumpScene;

- (id)description;
- (void).cxx_destruct;

@end
