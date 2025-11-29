@class FinderLocation;

@interface CurrentLocationRsp : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLocation *location;

+ (void)initialize;

@end
