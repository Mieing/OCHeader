@class NSString;

@interface MJImageMaterialItem : NSObject

@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *previewImageURL;
@property (nonatomic) unsigned long long loadingStatus;

- (id)initWithIdentifier:(id)a0 name:(id)a1 previewImageURL:(id)a2 scene:(unsigned long long)a3;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
