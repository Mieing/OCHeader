@class NSString, NSNumber, NSArray;

@interface AWEIMDownloadResourceModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) unsigned long long resourceType;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL inAdvance;
@property (copy, nonatomic) NSString *triggerType;
@property (copy, nonatomic) NSArray *randomInteractiveEmojiResultInfos;

- (void).cxx_destruct;
- (id)description;

@end
