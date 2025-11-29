@class NSString;

@interface ACCBarItemResourceConfig : NSObject

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *selectedImageName;
@property (nonatomic) BOOL isLottie;
@property (copy, nonatomic) NSString *lottieResourceName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) void *itemId;
@property (nonatomic) unsigned long long location;

- (void).cxx_destruct;
- (id)init;

@end
