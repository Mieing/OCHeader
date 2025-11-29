@class NSString;

@interface MSETransmitUrlData : MSETransmitData <PBCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *thumUrl;
@property (retain, nonatomic) NSString *thumPath;
@property (retain, nonatomic) NSString *contentUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumUrl;
+ (void)PBArrayAdd_contentUrl;
+ (void)PBArrayAdd_thumPath;
+ (void)PBArrayAdd_desc;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
