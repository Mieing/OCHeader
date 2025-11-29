@class NSString, MMLiveStorageCleanupPinningToken;

@interface MMFinderLivePlayGiftAnimationCommandResource : NSObject

@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *pinningToken;

+ (id)resourceWithUri:(id)a0 md5:(id)a1;
+ (id)resourceWithBackendModel:(id)a0;

- (void).cxx_destruct;

@end
