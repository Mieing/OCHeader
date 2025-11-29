@class NSString;

@interface WCFinderMyTabEntranceParams : NSObject <NSCopying>

@property (retain, nonatomic) NSString *entranceWording;
@property (retain, nonatomic) NSString *entranceWordingUrl;
@property (nonatomic) int wordingType;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
