@class NSString, NSObject;
@protocol IESIMFriendsAlbumServiceInterface;

@interface IESIMFriendsAlbumServiceInterfaceWrapper : NSProxy <IESIMFriendsAlbumServiceInterface>

@property (retain, nonatomic) NSObject<IESIMFriendsAlbumServiceInterface> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
