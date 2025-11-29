@class NSString;

@interface VEAIMomentMetaInfo : NSObject

@property (nonatomic) long long size;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long orientation;
@property (nonatomic) float duration;
@property (copy, nonatomic) NSString *imgPath;
@property (nonatomic) BOOL isCamera;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) long long shotTime;
@property (nonatomic) long long createTime;
@property (nonatomic) long long modifyTime;

- (void).cxx_destruct;

@end
