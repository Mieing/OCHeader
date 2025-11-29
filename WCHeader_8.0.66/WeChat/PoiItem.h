@class NSString;

@interface PoiItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bId;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *address;
@property (nonatomic) double distance;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (void)initialize;

@end
