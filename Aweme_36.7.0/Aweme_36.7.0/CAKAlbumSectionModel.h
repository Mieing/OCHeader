@class NSString, NSObject;
@protocol CAKCategoryContainerProtocol;

@interface CAKAlbumSectionModel : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long resourceType;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *assetDataModel;

- (void).cxx_destruct;

@end
