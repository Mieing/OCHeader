@interface IESIMDiskSpaceStatus : NSObject

@property (nonatomic) double updateTime;
@property (nonatomic) double appSizeGB;
@property (nonatomic) double freeSizeGB;
@property (nonatomic) double totalSizeGB;

- (id)description;

@end
