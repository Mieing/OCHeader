@class NSString;

@interface CKAAlbumCollectionModel : NSObject {
    void /* function */ name;
    void /* unknown type, empty encoding */ sequence;
    void /* function */ localIdentifier;
    void /* unknown type, empty encoding */ fetchResult;
    void /* unknown type, empty encoding */ collection;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) long long count;
@property (nonatomic, copy) NSString *localIdentifier;
@property (nonatomic) BOOL isCameraRoll;

- (id)initWithCollection:(id)a0 result:(id)a1;
- (void)getCoverImageWithImageSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 networkAccessAllowed:(BOOL)a2 resizeMode:(long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithResult:(id)a0;

@end
