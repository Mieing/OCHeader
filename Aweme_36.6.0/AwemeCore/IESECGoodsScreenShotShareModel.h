@class NSString, NSDictionary;

@interface IESECGoodsScreenShotShareModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *itemid;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL useRebrandStyle;
@property (copy, nonatomic) NSDictionary *activityInfo;

- (void).cxx_destruct;

@end
