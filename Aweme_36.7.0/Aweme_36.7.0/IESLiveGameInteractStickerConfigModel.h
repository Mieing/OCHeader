@class NSString;

@interface IESLiveGameInteractStickerConfigModel : NSObject

@property (copy, nonatomic) NSString *configKey;
@property (nonatomic) unsigned long long renderType;
@property (nonatomic) BOOL seiSync;
@property (copy, nonatomic) NSString *logEvent;
@property (nonatomic) BOOL scaleType;

+ (id)modelWithDict:(id)a0;

- (void).cxx_destruct;

@end
