@class NSString, NSDictionary;

@interface IESIMLittleEmoticonLoadContext : NSObject

@property (nonatomic) long long iosEmojiId;
@property (copy, nonatomic) NSString *resourceUrl;
@property (nonatomic) int version;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSDictionary *animateUrlList;

- (void).cxx_destruct;

@end
