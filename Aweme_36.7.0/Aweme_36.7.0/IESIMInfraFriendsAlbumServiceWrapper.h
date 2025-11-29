@class NSString, NSObject;
@protocol IESIMInfraFriendsAlbumServiceInterface;

@interface IESIMInfraFriendsAlbumServiceWrapper : NSProxy <IESIMInfraFriendsAlbumServiceInterface>

@property (retain, nonatomic) NSObject<IESIMInfraFriendsAlbumServiceInterface> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
