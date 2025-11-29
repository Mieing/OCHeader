@class NSString, NSArray;

@interface IESGurdSettingsUpdateConfigItem : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSArray *channels;

+ (id)configWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
