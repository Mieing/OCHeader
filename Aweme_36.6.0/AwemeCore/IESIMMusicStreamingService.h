@class NSString;

@interface IESIMMusicStreamingService : HTSService <IESIMMusicStreamingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)batchGetMusicLiteInfosWithIdInfos:(id)a0 completion:(id /* block */)a1;

@end
