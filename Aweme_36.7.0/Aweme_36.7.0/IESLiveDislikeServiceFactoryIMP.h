@class NSString;

@interface IESLiveDislikeServiceFactoryIMP : NSObject <IESLiveDislikeServiceFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createDislikeServiceWithCollectionView:(id)a0 longPressEnabled:(BOOL)a1;

@end
