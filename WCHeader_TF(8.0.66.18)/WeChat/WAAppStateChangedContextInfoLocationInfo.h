@interface WAAppStateChangedContextInfoLocationInfo : MMObject

@property (nonatomic) BOOL canKeepAliveByLocating;
@property (nonatomic) BOOL isBackgroundLocating;
@property (nonatomic) BOOL isLocationSharedResourceBeenRecovered;

- (id)description;

@end
