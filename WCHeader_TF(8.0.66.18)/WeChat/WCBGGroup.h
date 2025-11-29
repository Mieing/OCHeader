@class NSString, NSMutableArray;

@interface WCBGGroup : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *mediaList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgGroupFromServerObject:(id)a0;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_mediaList;
+ (void)initialize;

@end
