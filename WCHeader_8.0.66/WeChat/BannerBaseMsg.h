@class NSString;

@interface BannerBaseMsg : NSObject <PBCoding>

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int valid;
@property (retain, nonatomic) NSString *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_valid;
+ (void)PBArrayAdd_data;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)decodeMsgXml:(id)a0;
- (void).cxx_destruct;

@end
