@class NSDictionary, NSMutableDictionary, NSString;

@interface IESGCPTrackUserInfoModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *propertyStore;
@property (readonly, nonatomic) NSDictionary *JSONDictionary;
@property (copy, nonatomic) NSString *isHistoryActive;
@property (copy, nonatomic) NSString *isHistoryInstallPackage;
@property (copy, nonatomic) NSString *omniCooperationType;

- (void).cxx_destruct;
- (id)init;

@end
