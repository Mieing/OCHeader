@class NSString;

@interface TrackPOIItem : WXPBGeneratedMessage

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *addr;

+ (void)initialize;

@end
