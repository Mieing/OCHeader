@class NSString;

@interface IESIMEmoticonConfig : NSObject

@property (copy, nonatomic) NSString *resourceRootPath;
@property (copy, nonatomic) NSString *animateResourceRootPath;
@property (copy, nonatomic) NSString *recentlyUsedKeyPrefix;
@property (nonatomic) double screenScale;
@property (copy, nonatomic) NSString *emoticonBackAttributedString;
@property (copy, nonatomic) NSString *emoticonTextBackedStringAttributeName;

+ (id)createConfigWithBlock:(id /* block */)a0;

- (long long)imageScale;
- (void).cxx_destruct;

@end
