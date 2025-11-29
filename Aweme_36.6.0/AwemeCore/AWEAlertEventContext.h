@class NSMutableArray, NSMutableDictionary;

@interface AWEAlertEventContext : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *shownAlerts;
@property (retain, nonatomic) NSMutableDictionary *trackExtra;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
