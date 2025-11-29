@interface TPAssetDataRange : NSObject

@property (nonatomic) long long offset;
@property (nonatomic) long long length;

- (long long)max;

@end
