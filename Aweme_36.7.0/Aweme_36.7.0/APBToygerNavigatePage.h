@class NSString;

@interface APBToygerNavigatePage : NSObject

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL needRareCharUi;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
