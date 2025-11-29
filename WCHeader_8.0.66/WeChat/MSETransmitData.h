@class NSString;

@interface MSETransmitData : NSObject <PBCoding>

@property (retain, nonatomic) NSString *searchText;
@property (nonatomic) long long shareType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_searchText;
+ (void)PBArrayAdd_shareType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
