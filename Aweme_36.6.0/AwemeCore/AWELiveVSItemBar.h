@class NSDictionary, NSString, NSNumber;

@interface AWELiveVSItemBar : AWEBaseApiModel

@property (retain, nonatomic) NSDictionary *iconDark;
@property (retain, nonatomic) NSDictionary *iconLight;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *seperator;
@property (retain, nonatomic) NSString *detail;
@property (retain, nonatomic) NSNumber *watchInfoPv;
@property (retain, nonatomic) NSString *watchInfoHeat;
@property (retain, nonatomic) NSNumber *collectionId;
@property (retain, nonatomic) NSNumber *tabID;
@property (retain, nonatomic) NSString *contentType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
