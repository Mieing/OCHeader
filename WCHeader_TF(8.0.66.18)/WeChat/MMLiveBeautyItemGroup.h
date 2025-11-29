@class NSString, NSArray;

@interface MMLiveBeautyItemGroup : NSObject

@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long order;

+ (id)itemGroupInJsonDictionary:(id)a0 suiteId:(id)a1;

- (void).cxx_destruct;

@end
