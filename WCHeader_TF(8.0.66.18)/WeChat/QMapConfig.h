@class NSString, NSDictionary, QTrafficStyle;

@interface QMapConfig : NSObject

@property (readonly, copy, nonatomic) NSString *subID;
@property (readonly, copy, nonatomic) NSString *subKey;
@property (copy, nonatomic) NSString *mapFont;
@property (copy, nonatomic) NSDictionary *preset;
@property (nonatomic) int overseaSourceType;
@property (retain, nonatomic) QTrafficStyle *trafficStyle;
@property (nonatomic) BOOL enableMSAA;

- (id)initWithSubID:(id)a0 subKey:(id)a1;
- (void).cxx_destruct;

@end
