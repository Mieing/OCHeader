@class NSString;

@interface AWEIMImageTrackerConfig : NSObject

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *targetId;
@property (nonatomic) long long avatarType;
@property (nonatomic) long long conversationType;
@property (nonatomic) BOOL needTransform;
@property (nonatomic) long long resultForLLIAPStrategy;

- (void).cxx_destruct;

@end
