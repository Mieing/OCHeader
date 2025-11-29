@class FinderLocation;

@interface OpenFinderPoiPageReq : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLocation *finderLocation;
@property (nonatomic) unsigned long long feedId;

+ (void)initialize;

@end
