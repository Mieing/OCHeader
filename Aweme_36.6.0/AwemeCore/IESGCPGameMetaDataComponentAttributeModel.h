@class NSString, NSDictionary;

@interface IESGCPGameMetaDataComponentAttributeModel : NSObject

@property (readonly, copy, nonatomic) NSString *iOSOrangeURL;
@property (readonly, copy, nonatomic) NSString *iosGameName;
@property (copy, nonatomic) NSString *componentExtra;
@property (readonly, copy, nonatomic) NSDictionary *componentExtraCacheMap;

- (void).cxx_destruct;

@end
