@interface CKADataFetchProcessor : NSObject {
    void /* unknown type, empty encoding */ albumReadCert;
    void /* function */ eventFetchCameraRollCompletion;
}

@property (nonatomic, copy) id /* block */ eventFetchCameraRollCompletion;

- (void)initDataContaienrWithDescription:(id)a0 completion:(id /* block */)a1;
- (void)refreshDataContainerWithDataContainer:(id)a0;
- (id)initWithAlbumReadCert:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
