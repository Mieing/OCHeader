@class NSString, NSArray;

@interface BDUGSecureConfig : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *notificationName;
@property (nonatomic) BOOL needConsumeRepeatedly;
@property (nonatomic) BOOL detectPatternsEnable;
@property (nonatomic) BOOL ignoreSettings;
@property (copy, nonatomic) id /* block */ content;
@property (copy, nonatomic) NSArray *patterns;

- (void).cxx_destruct;
- (id)init;

@end
