@class NSString, NSDictionary, NSURL, AWEInnerPushControlModel, NSNumber;

@interface AWEInTodayInnerPushModel : NSObject

@property (retain, nonatomic) NSNumber *pushShowType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSURL *imageUrl;
@property (copy, nonatomic) NSString *openURL;
@property (retain, nonatomic) NSNumber *gid;
@property (retain, nonatomic) NSNumber *rid;
@property (copy, nonatomic) NSString *businessType;
@property (retain, nonatomic) NSNumber *dismissTimeInterval;
@property (copy, nonatomic) NSDictionary *payLoad;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly, nonatomic) AWEInnerPushControlModel *pushControlModel;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
