@class NSString;

@interface BDPXPlaySingleItemSettingsModel : NSObject

@property (nonatomic) BOOL singleSwitch;
@property (copy, nonatomic) NSString *gameId;
@property (nonatomic) BOOL isMixEngine;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
